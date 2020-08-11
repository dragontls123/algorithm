#include <stdio.h>
#include <algorithm>
using namespace std;

long long int n;

long long int a[10000010], b[10000010];
long long int cnt(long long int x) {
	long long int count = 0;
	for (int i = 0; i < n; i++) {
		if (x >= a[i] && x <= b[i])
			count += (x - a[i]);
		if (x > b[i])
			count += (b[i] - a[i] + 1);
	}
	return count;
}
int main() {
	scanf("%d", &n);
	long long int c, min = 0, max = 0;
	for (long long int i = 0; i < n; i++) {
		scanf("%lld %lld", &a[i], &b[i]);
		if (a[i] < min)
			min = a[i];
		if (b[i] > max)
			max = b[i];
	}
	max++;

	scanf("%lld", &c);
	while (min + 1 < max) {
		long long int mid = (min + max) / 2;
		long long int temp = cnt(mid);
		if (temp < c + 1)
			min = mid;
		else
			max = mid;
	}
	printf("%lld", min);
	//Please Enter Your Code Here

	return 0;
}