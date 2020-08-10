#include<stdio.h>
int n;
int result[100];
int mynum = 0;
int cnt = 0;
void divi(int sum, int index) {
	if (sum == n && index > 1) {
		printf("%d", result[0]);
		for (int i = 1; i < index; i++) {
			printf("+%d", result[i]);
		}
		printf("\n");
		cnt++;
	}
	else {

		for (int i = n - sum; i > 0; i--) {
			result[index] = i;

			if (index > 0 && result[index - 1] < result[index])
				continue;

			divi(sum + i, index + 1);

		}
	}
}
int main() {
	scanf("%d", &n);
	divi(0, 0);
	printf("%d", cnt);
	return 0;
}