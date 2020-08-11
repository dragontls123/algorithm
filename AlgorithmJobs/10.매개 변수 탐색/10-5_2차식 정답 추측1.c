#include <stdio.h>

int bs(long long int s, long long int e, long long int v) {
	long long int mid = (s + e) / 2;
	long long int temp = mid * mid + mid;

	if (v == temp)return mid;
	if (s + 1 == e)return s;
	else if (temp > v)return bs(s, mid, v);
	else if (temp < v)return bs(mid, e, v);

	return -1;
}

int main() {
	long long int n;
	scanf("%lld", &n);
	printf("%lld", bs(0, 1000000000, n));

	//Please Enter Your Code Here

	return 0;
}