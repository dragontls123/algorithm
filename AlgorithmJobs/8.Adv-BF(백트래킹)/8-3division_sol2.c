#include <stdio.h>
int n, k;
int arr[100];
int cnt = 0;
void division(int sum, int length) {
	if (sum == n) {
		cnt++;
		printf("%d", arr[0]);
		for (int i = 1; i < length; i++)
			printf("+%d", arr[i]);
		printf("\n");
	}
	if (sum > n)
		return;

	for (int i = n - 1; i >= 1; i--) {
		if (length == 0) {
			arr[length] = i;
			division(sum + i, length + 1);
			arr[length] = 0;
		}
		else {
			if (arr[length - 1] >= i) {
				arr[length] = i;
				division(sum + i, length + 1);
				arr[length] = 0;
			}
		}
	}
}
int main() {
	scanf("%d", &n);
	division(0, 0);
	printf("%d", cnt);
	return 0;
}