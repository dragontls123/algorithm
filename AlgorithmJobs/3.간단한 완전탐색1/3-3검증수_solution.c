#include <stdio.h>

int main() {
	int temp = 0;
	int d;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &d);
		temp += d * d;
	}
	printf("%d", temp % 10);
	return 0;
}