#include <stdio.h>
int d[10010];
int n;
int main() {

	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &d[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", d[i]);
	}
	return 0;
}