#include <stdio.h>

int main() {

	int d, c;
	int count = 0;
	scanf("%d", &d);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &c);
		if (d == c)count++;
	}
	printf("%d", count);
	return 0;
}
​