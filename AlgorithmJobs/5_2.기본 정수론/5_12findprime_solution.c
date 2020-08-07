#include <stdio.h>
int d[1000];
int main() {

	int n, temp = 0, m = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &d[i]);
		temp = 0;
		for (int j = 1; j < d[i]; j++) {
			if (d[i] % j == 0) {
				temp++;
			}
		}
		if (temp == 1) {
			m++;
		}
	}
	printf("%d", m);
	return 0;
}