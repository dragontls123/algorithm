#include <stdio.h>
int d[10][10];
int n;
int main() {

	//Please Enter Your Code Here
	scanf("%d", &n);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &d[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			if (d[i][j] == 0)d[i][j] = 1;
			else
				d[i][j] = 0;
		}
		for (int j = 0; j < 10; j++) {
			if (i == j)continue;
			if (d[j][i] == 0)d[j][i] = 1;
			else
				d[j][i] = 0;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", d[i][j]);
		}printf("\n");
	}
	return 0;
}