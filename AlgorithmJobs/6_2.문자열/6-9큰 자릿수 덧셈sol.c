#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char d[200], c[200];
int dd[200], cc[200], result[200];
int main() {

	scanf(" %s %s", &d, &c);
	for (int i = 200 - strlen(d); i < 200; i++) {
		dd[i] = d[i - 200 + strlen(d)] - '0';
	}
	for (int i = 200 - strlen(c); i < 200; i++) {
		cc[i] = c[i - 200 + strlen(c)] - '0';
	}
	int max = strlen(d) > strlen(c) ? strlen(d) : strlen(c);
	for (int i = 199; i > 199 - max; i--) {
		result[i] += (dd[i] + cc[i]);
		if (result[i] > 9) {
			result[i - 1]++;
			result[i] -= 10;
		}
	}
	for (int i = 199 - max; i < 200; i++) {
		if (result[i] == 0 && i == 199 - max)continue;
		printf("%d", result[i]);
	}
	return 0;
}