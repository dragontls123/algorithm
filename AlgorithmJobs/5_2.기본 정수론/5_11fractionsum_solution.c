#include <stdio.h>
int a, b, n, m;
int main() {

	scanf("%d %d %d %d", &a, &b, &m, &n);
	int temp, tempb = b, tempn = n;
	while (tempb % tempn != 0) {
		temp = tempb;
		tempb = tempn;
		tempn = temp % tempn;
	}
	int g = tempn;
	int l = b * n / g;
	int s = l / b * a + l / n * m;
	tempb = s, tempn = l;
	while (tempb % tempn != 0) {
		temp = tempb;
		tempb = tempn;
		tempn = temp % tempn;
	}
	printf("%d %d", s / tempn, l / tempn);
	return 0;
}