#include <stdio.h>
int n;
int fact(int t) {
	if (t == 1)return 1;
	return t * fact(t - 1);
}
int main() {
	scanf("%d", &n);
	//Please Enter Your Code Here
	printf("%d", fact(n));

	return 0;
}