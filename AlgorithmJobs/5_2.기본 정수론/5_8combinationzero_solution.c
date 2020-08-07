#include <stdio.h>
int n, m;
int main() {
	scanf("%d %d", &n, &m);
	int temp, a = 0, b = 0;
	for (int i = n; i >= 2; i--) {
		temp = i;
		if (temp % 5 == 0) {
			while (temp % 5 == 0) {
				b++;
				temp = temp / 5;
			}
		}
		if (temp % 2 == 0) {
			while (temp % 2 == 0) {
				a++;
				temp = temp / 2;
			}
		}
	}
	for (int i = m; i >= 2; i--) {
		temp = i;
		if (temp % 5 == 0) {
			while (temp % 5 == 0) {
				b--;
				temp = temp / 5;
			}
		}
		if (temp % 2 == 0) {
			while (temp % 2 == 0) {
				a--;
				temp = temp / 2;
			}
		}
	}
	for (int i = n - m; i >= 2; i--) {
		temp = i;
		if (temp % 5 == 0) {
			while (temp % 5 == 0) {
				b--;
				temp = temp / 5;
			}
		}
		if (temp % 2 == 0) {
			while (temp % 2 == 0) {
				a--;
				temp = temp / 2;
			}
		}
	}
	printf("%d", a > b ? b : a);

	return 0;
}