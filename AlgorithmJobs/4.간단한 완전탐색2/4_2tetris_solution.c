#include <stdio.h>
int d[20][30];
int a, b;
int main() {

	scanf("%d %d", &a, &b);

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 30; j++) {
			d[i][j] = 1;
		}
	}
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			scanf("%d", &d[i][j]);
		}
	}

	int score = 0;
	int sum = 0;
	int max = 0;
	int maxi = 0;
	int cover = 0;
	for (int i = 0; i <= b - 3; i++) {
		for (int j = 0; j < a; j++) {
			score = 0;
			cover = 0;
			for (int kk = 0; kk < i; kk++) {
				cover += d[kk][j];
			}

			if (cover == 0 && d[i + 4][j] == 1 && (d[i][j] + d[i + 1][j] + d[i + 2][j] + d[i + 3][j] == 0)) {

				for (int k = i; k < i + 4; k++) {
					sum = 0;

					for (int kk = 0; kk < a; kk++) {
						sum += d[k][kk];
					}

					if (sum == a - 1) {
						score++;
					}
				}

				if (max < score) {
					max = score;
					maxi = j;
				}
			}
		}
	}
	if (max == 0) {
		printf("0 0");
	}
	else
		printf("%d %d", maxi + 1, max);

	return 0;
}