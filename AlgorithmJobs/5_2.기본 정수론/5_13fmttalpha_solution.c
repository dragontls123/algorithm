#include <stdio.h>
int x, y, n = 1, sum = 0;
int main() {
	scanf("%d %d", &x, &y);

	while (sum < (y - x)) {
		if (n % 2 == 1) {
			sum = (n / 2 + 1) * (n / 2 + 1);
		}
		if (n % 2 != 1) {
			sum = ((n - 1) / 2 + 1) * ((n - 1) / 2 + 1) + n / 2;
		}
		n++;
	}
	printf("%d", n - 1);
	return 0;
}