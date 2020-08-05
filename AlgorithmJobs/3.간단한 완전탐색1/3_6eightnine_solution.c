#include <stdio.h>
int d[110][110];
int a, b;
int temp;
int main() {

	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			scanf("%d", &d[i][j]);
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b / 2; j++) {
			temp = d[i][j];
			d[i][j] = d[i][b - 1 - j];
			d[i][b - 1 - j] = temp;
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	return 0;
}