#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int d[100][100];
int n, x, y, r;

int main() {
	scanf("%d %d %d %d", &n, &x, &y, &r);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == x && y == j)printf("x ");
			else if (abs(x - i) + abs(y - j) <= r)
				printf("%d ", abs(x - i) + abs(y - j));
			else
				printf("0 ");
		}printf("\n");
	}

	return 0;
}