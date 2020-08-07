#include <stdio.h>
int n, first, second, temp;
int d[100010];
int dd[1000100];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &d[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		dd[i] = d[i + 1] - d[i];
	}
	second = dd[0];

	for (int i = 0; i < n - 2; i++) {
		first = dd[i + 1];

		while (first % second != 0) {
			temp = first % second;
			first = second;
			second = temp;
		}
	}
	int t = 0;
	while (d[0] + second * t < d[n - 1]) {
		t++;
	}
	printf("%d", t - n + 1);
	return 0;
}