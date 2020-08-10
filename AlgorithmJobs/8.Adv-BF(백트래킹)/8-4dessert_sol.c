/*
각 연산자를 넣어보는 완전탐색.
+, -, . 순서대로 모두 넣어보고 다 들어간 후 계산해서 0인 식만 카운트.

계산 방법 : 연산자 우선순위에 맞춰서 .부터 모두 계산한 후 +와 -를 계산.

1. '.' 계산
뒤에서부터 읽으면서 .의 앞의 수에 . 뒤에 있는 수를 붙여주는 작업을 한다.

예를들어 1.2.3+4.5는 아래 과정으로 진행된다.

1.2.3+4.5

1.2.3+45.5

1.23.3+45.5

123.23.3+45.5

위 과정대로 진행하려면 . 뒤의 숫자가 몇자린지 알아야 하는데 그 부분은 함수로 따로 구현.

2. '+', '-' 계산
앞에서부터 읽으면서 .을 무시하며 +와 -를 처리한다.
*/
#include <stdio.h>

int n;
char arr[14];
int cnt;
char op[3] = { '+','-','.' };

//x가 몇자린지 알려주는 함수. '.' 계산시 사용.
long long ten(int x)
{
	long long ret = 1;

	if (x == 0) return 10;

	while (x)
	{
		ret *= 10;
		x /= 10;
	}

	return ret;
}

long long calc()
{
	long long sum;
	int i;
	long long number[15];

	for (i = 0; i < 15; i++) number[i] = i + 1;//number[i]=1,2,...15

	//뒤에서부터 읽으면서 '.' 처리.
	for (i = n - 2; i >= 0; i--)
	{
		if (arr[i] == '.')
		{
			number[i] = number[i] * ten(number[i + 1]) + number[i + 1];
		}
	}

	//앞에서부터 읽으면서 '+'와 '-' 처리.
	sum = number[0];
	for (i = 0; i < n - 1; i++)
	{
		if (arr[i] == '+') sum += number[i + 1];
		else if (arr[i] == '-') sum -= number[i + 1];
	}

	return sum;
}

void recur(int index)
{
	int i;

	if (index == n - 1)
	{
		if (calc() == 0)
		{
			if (cnt < 20)
			{
				for (i = 0; i < n - 1; i++)
				{
					printf("%d %c ", i + 1, arr[i]);
				}
				printf("%d\n", n);
			}

			cnt++;
		}
		return;
	}

	for (i = 0; i < 3; i++)
	{
		arr[index] = op[i];
		recur(index + 1);
	}
}

int main()
{
	scanf("%d", &n);

	recur(0);

	printf("%d", cnt);
}
