#include <stdio.h>
int n;
int main() {

	scanf("%d", &n);
	int t = 2;
	while (t <= n) {
		if (n % t == 0) {
			printf("%d\n", t);
			n = n / t;
			t--;
		}

		t++;
	}
	return 0;
}