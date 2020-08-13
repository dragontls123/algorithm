#include <stdio.h>
long long int n;
long long int d[1000010];
int main() {
	scanf("%lld", &n);
	d[1] = 1;
	long long int sum = 0;
	for (int i = 2; i <= 3; i++) {
		sum += d[i - 1];
		d[i] = sum + 1;
	}
	for (long long int i = 4; i <= n; i++) {
		for (long long int j = i - 3; j <= i - 1; j++) {
			d[i] += d[j] % 1000007;
		}
	}
	printf("%lld", d[n] % 1000007);
	
	return 0;
}