#include <stdio.h>
int sum[1010][1010];
int d[1010][10];
int main() {

	int n;
	int temp, tempi;
	int max = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &d[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < 5; j++) {
			temp = d[i][j];

			for (int k = 0; k < n; k++) {
				if (d[k][j] == temp) {
					sum[i][k] = 1;
				}
			}
		}


	}

	for (int i = 0; i < n; i++) {
		int s = 0;

		for (int j = 0; j < n; j++) {
			s += sum[i][j];
		}
		if (s > max) {
			max = s;
			tempi = i;
		}
	}
	printf("%d", tempi + 1);
	return 0;
}