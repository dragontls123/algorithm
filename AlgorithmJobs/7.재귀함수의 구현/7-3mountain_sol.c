#include <stdio.h>
int n;
void m(int n) {
	if (n == 1) { printf("1"); return; }
	m(n - 1);
	printf("%d", n);
	m(n - 1);
}
int main() {
	scanf("%d", &n);
	m(n);
	return 0;
}