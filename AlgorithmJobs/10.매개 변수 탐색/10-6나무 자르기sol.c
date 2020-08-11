#include <stdio.h>
long long int n, m, h;
long long int temp[1000000];

long long int bs(long long int s, long long int e, long long int t) {

	long long int mid = (s + e) / 2;
	long long int sum = 0;
	for (long long int i = 0; i < n; i++) {
		if (temp[i] > mid)
			sum += (temp[i] - mid);
	}

	if (s + 1 >= e || t == sum)return mid;
	else if (sum < t)return bs(s, mid, t);
	else if (sum > t)return bs(mid, e, t);

}

int main() {
	scanf("%lld %lld", &n, &m);

	for (long long int i = 0; i < n; i++) {
		scanf("%lld", &temp[i]);
	}
	printf("%lld", bs(0, 1000000000, m));
	//Please Enter Your Code Here

	return 0;
}