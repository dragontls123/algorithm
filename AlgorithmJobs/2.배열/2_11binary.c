#include <stdio.h>
#define MAX(X,Y) ((X) > (Y) ? (X) : (Y))  
int n, a, b, c;
int max = 0;
int temp;
int main() {

	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == b && b == c) {
			temp = 10000 + 1000 * a;
		}
		if ((a == b && b != c)) {
			temp = 1000 + a * 100;
		}
		if ((b == c && a != b)) {
			temp = 1000 + b * 100;
		}
		if ((a == c && a != b)) {
			temp = 1000 + a * 100;
		}
		if (a != b && a != c && c != b) {
			temp = MAX(a, MAX(b, c)) * 100;
		}
		if (temp > max) {
			max = temp;
		}

	}
	printf("%d", max);
	return 0;
}