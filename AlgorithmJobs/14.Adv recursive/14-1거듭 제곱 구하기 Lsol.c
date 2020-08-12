#include <stdio.h>


int getR(int n, long long int m) {
	if (m == 0)return 1;
	else if (m % 2 == 0) {
		int temp = getR(n, m / 2);
		return temp * temp % 10007;
	}
	else {
		int temp = getR(n, m - 1);
		return temp * n % 10007;
	}
}
int main() {
	long long int n, m;
	scanf("%lld %lld", &n, &m);
	printf("%d", getR(n, m));
	return 0;
}