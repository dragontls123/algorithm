#include <stdio.h>
#include <algorithm>
using namespace std;

long long int target, n, sum = 0;

long long int getOrder(long long int x) {
	sum = 0;
	for (long long int i = 1; i <= n; i++) {
		if (x > n * i)sum += n;

		else {
			if (x % (n * i) == 0)
				sum += x / i - 1;
			else
				sum += x / i;
		}
	}
	return sum;
}

int main() {

	scanf("%lld %lld", &n, &target);
	long long int start = 1, end = n * n + 1;

	while (start + 1 < end) {
		long long int mid = (start + end) / 2;
		long long int myOrder = getOrder(mid);
		if (myOrder < target)
			start = mid;
		else
			end = mid;
	}
	printf("%lld", end);
	return 0;
}