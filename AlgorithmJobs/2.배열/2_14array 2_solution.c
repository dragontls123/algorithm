#include <stdio.h>
int d[110][110];
int n, m;
int temp, temp1;
int main() {

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &d[i][j]);
		}
	}
	scanf("%d %d", &temp, &temp1);
	printf("%d", d[temp][temp1]);
	return 0;
}