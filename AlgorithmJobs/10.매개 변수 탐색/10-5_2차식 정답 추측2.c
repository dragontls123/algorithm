#include <stdio.h>
//x=1 2 x=2 6 x=3 12 x=4 20
long long int q;
int main() {
	long long int t = 1;
	scanf("%lld", &q);
	while (t * t + t <= q) {
		t++;
	}
	printf("%lld", t - 1);
	//Please Enter Your Code Here

	return 0;
}