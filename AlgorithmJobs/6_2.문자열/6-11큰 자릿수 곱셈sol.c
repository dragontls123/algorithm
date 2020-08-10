#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char d[200], c[200];
int dd[200], cc[200], result[400];
int main() {

	scanf(" %s %s", &d, &c);
	for (int i = 200 - strlen(d); i < 200; i++) {
		dd[i] = d[i - 200 + strlen(d)] - '0';
	}
	for (int i = 200 - strlen(c); i < 200; i++) {
		cc[i] = c[i - 200 + strlen(c)] - '0';
	}
	for (int i = 199; i > 0; i--) {
		int k = 199;
		int t = 0;
		for (int j = 0; j < 200; j++) {
			result[i - t] += (dd[i] * cc[k]);
			if (result[i] > 9) {
				result[i - 1 - t] += result[i - t] / 10;
				result[i - t] = result[i - t] % 10;
			}
			k--; t++;
		}
	}
	int n = 0;

	while (result[n] == 0) {
		n++;
	}
	for (int i = n; i < 200; i++) {

		printf("%d", result[i]);
	}
	return 0;
}