#include <stdio.h>
#include <algorithm>
using namespace std;
int n[100100], q[101000];
int nn, qq;
int bs(int arr[], int start, int end, int value) {
	if (start > end) return -1;

	else if (start == end) {
		if (arr[start] == value)
			return start;
		else
			return -1;
	}

	else {
		int mid = (start + end) / 2;

		if (arr[mid] == value)return mid;
		else if (arr[mid] > value) return bs(arr, start, mid - 1, value);
		else return bs(arr, mid + 1, end, value);
	}

}
int main() {
	scanf("%d %d", &nn, &qq);
	for (int i = 0; i < nn; i++)
		scanf("%d", &n[i]);

	sort(n, n + nn);
	
	for (int i = 0; i < qq; i++) {
		scanf("%d", &q[i]);
		if (bs(n, 0, nn - 1, q[i]) != -1) {
			int cnt = 0;
			int temp = bs(n, 0, nn - 1, q[i]);
			while (q[i] == n[temp]) {
				cnt++;
				temp++;
			}
			temp = bs(n, 0, nn - 1, q[i]) - 1;
			while (0 <= temp && q[i] == n[temp]) {
				cnt++;
				temp--;
			}
			printf("%d\n", cnt);
		}
		else
			printf("0\n");
	}
	
	return 0;
}