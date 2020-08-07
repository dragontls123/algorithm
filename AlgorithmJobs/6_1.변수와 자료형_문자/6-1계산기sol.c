#include <stdio.h>
int a, b;
char x;
int main() {

	scanf("%d %c %d", &a, &x, &b);
	if (x == '+') {
		printf("%d", a + b);
	}
	if (x == '-') {
		printf("%d", a - b);
	}
	if (x == '*') {
		printf("%d", a * b);
	}
	if (x == '/') {
		printf("%d", a / b);
	}
	return 0;
}