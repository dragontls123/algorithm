#include <stdio.h>
//1 7 19 37
// 6 12 18
int main() {
	int n;
	scanf("%d", &n);
	int a = 1;
	int d = 6;
	int i = 1;
	int t = a;
	while (n > t) {
		t += i * d;
		i++;
	}
	printf("%d", i);
	return 0;
}