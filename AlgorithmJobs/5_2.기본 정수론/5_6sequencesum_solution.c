#include <stdio.h>
int n;
int d[1010][1010];
int sum = 0;
int s[1010];
int main() {
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &d[i][j]);
			s[i] += d[i][j];
			if ((i == 1 && j == n) || (i == j - 1)) {
				sum += d[i][j];
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		printf("%d ", (s[i] - sum / 2) / (n - 2));
	}

	return 0;
}