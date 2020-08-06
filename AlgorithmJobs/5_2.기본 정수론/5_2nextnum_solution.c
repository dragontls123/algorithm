#include <stdio.h>
int a, b, c;
int main() {
	while (1) {

		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) {
			return 0;
		}
		if (c - b == b - a) {
			printf("AP %d\n", c + b - a);
		}
		else if (c / b == b / a) {
			printf("GP %d\n", c * b / a);
		}
	}
	
	return 0;
}