#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
char ainput[200], binput[200];
int a[200], b[200], result[200];

int main() {
	scanf("%s %s", &ainput, &binput);
	for (int i = 200 - strlen(ainput); i < 200; i++) {
		a[i] = ainput[i - 200 + strlen(ainput)] - '0';
	}
	for (int i = 200 - strlen(binput); i < 200; i++) {
		b[i] = binput[i - 200 + strlen(binput)] - '0';
	}
	int ii = 0;
	int judge;
	while (ii < 200) {
		if (a[ii] > b[ii]) {
			judge = 0; break;
		}
		if (a[ii] < b[ii]) {
			judge = 1;
			break;
		}
		ii++;
	}
	if (ii == 200) { printf("0"); return 0; }

	for (int i = 199; i > 0; i--) {
		if (judge == 0) {
			result[i] += a[i] - b[i];
		}
		if (judge == 1) {
			result[i] += b[i] - a[i];
		}
		if (result[i] < 0) {
			result[i] += 10;
			result[i - 1]--;
		}
	}
	int t = 0;
	while (result[t] == 0) {
		t++;
	}
	if (judge == 1)printf("-");
	for (int i = t; i < 200; i++) {
		printf("%d", result[i]);
	}
	return 0;
}