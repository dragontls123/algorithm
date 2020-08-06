#include <stdio.h>
int d[10][10];
int tempi, tempj, max = 0;
int main() {

	//Please Enter Your Code Here
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &d[i][j]);
			if (max < d[i][j]) {
				max = d[i][j];
				tempi = i;
				tempj = j;
			}
		}
	}
	printf("%d\n%d %d", max, tempi + 1, tempj + 1);
	return 0;
}