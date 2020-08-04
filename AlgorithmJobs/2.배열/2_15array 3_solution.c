#include <stdio.h>
int n;
int x = 0, y = 1;
int temp = 1;
int d[120][120];
int main() {
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		d[y][++x] = temp++;

		for (int j = 1; j <= i; j++) {
			d[++y][--x] = temp++;
		}
		x = i;
		y = 1;
		temp--;
	}

	for (int i = 1; i <= n + 1; i++) {
		for (int j = 1; j <= n - i + 1; j++) {
			printf("%d ", d[i][j]);
		}printf("\n");
	}

	return 0;
}