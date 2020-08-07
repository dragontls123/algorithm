#include <stdio.h>
int d[250000];
int n;

int main() {

	for (int i = 2; i < 250000; i++) {
		d[i] = i;
	}

	for (int i = 2; i < 250000; i++) {
		if (d[i] != 0) {
			for (int j = i + i; j < 250000; j += i) {
				d[j] = 0;
			}
		}
	}
	scanf("%d", &n);
	while (n != 0) {
		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (d[i] != 0)cnt++;
		}
		printf("%d\n", cnt);
		scanf("%d", &n);
	}

	return 0;
}