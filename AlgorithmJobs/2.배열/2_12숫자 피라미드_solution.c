#include <stdio.h>
int n, s;
int d[10100];
int main() {
	scanf("%d %d", &n, &s);
	int t = s;
	for (int i = 0; i < n * n; i++) {
		d[i] = t;
		t++;
		if (t > 9)t = 1;
	}

	int temp = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = n - i; j > 0; j--) {
			printf(" ");
		}

		if (i % 2 == 1) {
			temp += (2 * i - 2);
			for (int j = 1; j <= 2 * i - 1; j++) {

				printf("%d", d[temp--]);
			}
		}
		else {
			temp += (2 * i - 2);
			for (int j = 1; j <= 2 * i - 1; j++) {
				printf("%d", d[temp++]);
			}
		}

		printf("\n");
	}
	return 0;
}