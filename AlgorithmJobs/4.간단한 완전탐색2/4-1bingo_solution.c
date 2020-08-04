#include <stdio.h>
int d[10][10];
int temp;
int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &d[i][j]);
		}
	}
	for (int i = 1; i <= 25; i++) {
		scanf("%d", &temp);
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				if (temp == d[j][k])
					d[j][k] = 0;
			}
		}

		int count = 0;

		for (int t = 0; t < 5; t++) {
			int sumv = 0;
			int sumh = 0;

			for (int tt = 0; tt < 5; tt++) {
				sumv += d[t][tt];
				sumh += d[tt][t];
			}
			if (sumv == 0)count++;
			if (sumh == 0)count++;
		}

		int sumx = 0, sumxx = 0;
		for (int t = 0; t < 5; t++) {
			sumx += d[t][t];
			sumxx += d[t][4 - t];
		}
		if (sumx == 0)count++;
		if (sumxx == 0)count++;
		if (count >= 3) {
			printf("%d", i);
			return 0;
		}
	}
	return 0;
}