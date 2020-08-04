#include <stdio.h>
int d[10][10];


int main() {
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			d[i][j] = 9;
		}
	}
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			scanf("%d", &d[i][j]);
		}
	}

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (d[i][j] < d[i - 1][j] && d[i][j] < d[i + 1][j] && d[i][j] < d[i][j + 1] && d[i][j] < d[i][j - 1]) {
				printf("* ");
			}
			else
			{
				printf("%d ", d[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}