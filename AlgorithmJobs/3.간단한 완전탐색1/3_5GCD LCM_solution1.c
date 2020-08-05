#include <stdio.h>
int gcd = 1;
int lcm;
int a, b;
int main() {

    scanf("%d %d", &a, &b);

	int small = a > b ? b : a;
	int t = small;
	while (t >= 1) {
		if (a % t == 0 && b % t == 0) {
			gcd = t;
			break;
		}
		t--;
	}
	lcm = a * b / gcd;
	printf("%d\n%d", gcd, lcm);
	return 0;
}