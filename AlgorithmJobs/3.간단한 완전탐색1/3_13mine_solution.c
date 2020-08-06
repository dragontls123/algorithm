#include <stdio.h>
int d[110][110];
int n, m, x, y;
int main() {
	scanf("%d %d %d %d", &n, &m, &x, &y);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &d[i][j]);
		}
	}
	int cnt = 0;
	if (d[x][y] == 1) { printf("game over"); return 0; }
	for (int i = x - 1; i <= x + 1; i++) {
		for (int j = y - 1; j <= y + 1; j++) {
			if (d[i][j] == 1)
				cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}