#include <stdio.h>

int n, a, b;//n개의 용액의 수(십만)

void merging(long long arr[], int s1, int e1, int s2, int e2) {//합병정렬 중 merging하기
	int p, q, index = 0;//왼쪽의 최솟값의 위치p, 오른쪽 q, 임시배열의 index
	long long temp[1000000];//정렬배열의 임시저장 십만개 이하

	p = s1; //왼쪽의 최솟값 위치에서 부터 시작
	q = s2; //오른쪽

	while (p <= e1 && q <= e2) {// 둘 사이이면 계속 실행
		if (arr[p] > arr[q]) {//오른쪽에 작은값이 있으면
			temp[index++] = arr[q];//오른쪽 값을 배열에 입력하고 index는 0부터 +1씩 한다.
			q++; //q를 한칸 오른쪽으로 이동
		}

		else {//그렇지 않으면 왼쪽에서
			temp[index++] = arr[p];
			p++;
		}
	}

	if (p > e1) {//왼쪽p가 왼쪽끝e1을 넘어가면 오른쪽 q부터 e2까지 나머지 배열에 하나씩 채운다.
		for (int i = q; i <= e2; i++)
			temp[index++] = arr[i];
	}

	else {//그렇지 않으면 왼쪽의 것을 그렇게 한다.
		for (int i = p; i <= e1; i++)
			temp[index++] = arr[i];
	}

	for (int i = s1; i <= e2; i++) {//임시배열의 것을 arr로 옮긴다.
		arr[i] = temp[i - s1];
	}
}

void mergeSort(long long arr[], int start, int end) {//합병정렬 재귀함수
	if (start >= end)
		return;

	else {
		int mid = (start + end) / 2;

		mergeSort(arr, start, mid);
		mergeSort(arr, mid + 1, end);

		merging(arr, start, mid, mid + 1, end);
	}
}

long long absoluteValue(long long sum) {//절댓값을 반환하는 함수
	if (sum < 0)//sum이 음수이면 양수로 바꾼다.
		return sum *= -1;

	else return sum;//sum값을 반환한다.
}

void result(long long arr[], int n) {//arr에서 n개의 배열속에서 절댓값이 가장 작은 값의 두 위치 a,b를 찾는다.....완전탐색??

	int start = 0, end = n - 1;//시작은start, 끝은 n-1
	long long min = 10000000000, sum = 0;//절댓값의 최솟값을 찾기 위해...min의 초기화는 왕창크게 백억

	a = start;//일단 좌start 우end 양끝값부터 살핀다.
	b = end;

	while (start < end) {//strat<end인 조건에서 실행한다.
		sum = arr[start] + arr[end];//sum은 두배열의 양끝값부터 합이다.

		long long value = absoluteValue(sum);//그 합의 절댓값을 value에 반환한다.

		//sum의 절댓값이 min보다 작으면
		//min값 갱신, 배열 인덱스 값도 갱신
		if (value < min) {//절댓값의 최솟값의 인덱스 찾아서 a,b에 반환한다.
			min = value;
			a = start;
			b = end;
		}

		//합이 0보다 크면
		//더 작은 값이랑 더해봐야 함
		//end의 값을 줄여줌
		if (sum > 0) {//sum이 양수이면 음수에 다가가도록 start는 그대로 두고 end를 줄인다.
			end--;
		}

		else {//sum이 음수이면 양수에 다가갈 수 있도록 start를 키운다.
			start++;
		}
	}
}

int main() {

	long long arr[1000000];//int를 안써도, long int long, int long long 다 같다.
	scanf("%d", &n);//n은 전체 용액의 수이고 십만 이하이다. 전역변수에서 선언

	for (int i = 0; i < n; i++)//n개의 lld를 입력받자.
		scanf("%lld", &arr[i]);

	mergeSort(arr, 0, n - 1);//arr의 0부터 n-1까지 합병정렬을 한다.

	result(arr, n);//정렬된 arr에서 n개의 숫자 중에서 0에 가까운 두 개의 특성값의 위치 a,b(a<b)를 반환한다. 두 쌍이상이 나오면 a가 가장 작은 쌍으로 한다. 

	printf("%lld %lld", arr[a], arr[b]);

	return 0;
}
