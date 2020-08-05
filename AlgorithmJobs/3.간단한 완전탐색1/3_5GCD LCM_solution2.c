#include <stdio.h>
int lcm;
int a, b;
int main() {

	scanf("%d %d", &a, &b);

	int temp = a, temp1 = b, temp2;
	while (temp % temp1 != 0) {
		temp2 = temp1;
		temp1 = temp % temp1;
		temp = temp2;
	}
	lcm = a * b / temp1;
	printf("%d\n%d", temp1, lcm);
	return 0;
}