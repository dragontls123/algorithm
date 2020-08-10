#include <stdio.h>
void bin(int n) {
	if (n == 0) { printf("0"); return; }
	if (n == 1) { printf("1"); return; }

	bin(n / 2);
	printf("%d", n % 2);
}
int main() {
	int n;
	scanf("%d", &n);
	//Please Enter Your Code Here
	bin(n);
	return 0;
}