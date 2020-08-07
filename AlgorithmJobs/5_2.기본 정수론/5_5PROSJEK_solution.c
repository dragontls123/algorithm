#include <stdio.h>
int n, temp;
int sum = 0, sum1 = 0;
int main() {
	scanf("%d", &n);
	//Please Enter Your Code Here
	scanf("%d", &temp);
	sum1 = temp;
	printf("%d ", sum1);
	for (int i = 2; i <= n; i++) {
		scanf("%d", &temp);
		sum = temp * i;

		printf("%d ", sum - sum1);

		sum1 = sum;
	}
	return 0;
}