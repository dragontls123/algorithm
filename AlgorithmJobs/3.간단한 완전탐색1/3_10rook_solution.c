#include<stdio.h>
int d[20][20];
int x, y;
int main() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf("%d", &d[i][j]);
			if (d[i][j] == 1) {
				y = i;
				x = j;
			}
		}
	}

	for (int i = 0; i < 8; i++) {

		if (d[y][i] == 2) {
			int sum = 0;
			int max = i > x ? i : x;
			int min = i > x ? x : i;
			for (int j = min + 1; j <= max - 1; j++) {
				sum += d[y][j];
			}

			if (sum == 0) {
				printf("1");
				return 0;
			}
		}

		if (d[i][x] == 2) {
			int sum = 0;
			int max = i > y ? i : y;
			int min = i > y ? y : i;
			for (int j = min + 1; j <= max - 1; j++) {
				sum += d[j][x];
			}

			if (sum == 0) {
				printf("1");
				return 0;
			}
		}
	}
	printf("0");
	return 0;
}