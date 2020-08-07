#include <stdio.h>
long long int n, m;
int main() {

scanf("%lld %lld", &n, &m);
	long long int a = n, b = m, c;
	while (a % b != 0) {
		c = b;
		b = a % b;
		a = c;

	}
	printf("%lld", n * m / b);
	return 0;
}