#include<stdio.h>
int d[110][110];
int n, a, b, c, dd;
int cnt[110];
int main() {
	int temp = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d", &a, &b, &c, &dd);
		for (int j = a; j < a + c; j++) {
			for (int k = b; k < b + dd; k++) {
				d[j][k] = temp;
			}
		}
		temp++;
	}
	for (int j = 0; j < 101; j++) {
		for (int k = 0; k < 101; k++) {
			cnt[d[j][k]]++;
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d\n", cnt[i]);
	}
	return 0;
}