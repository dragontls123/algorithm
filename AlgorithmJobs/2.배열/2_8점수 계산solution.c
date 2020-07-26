#include <stdio.h>
int d[120];
int n, sum = 0, score = 0;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &d[i]);
		if (d[i] == 1) {
			score++;
			sum += score;
		}
		if (d[i] == 0) {
			score = 0;
		}
	}
	printf("%d", sum);
	
	return 0;
}