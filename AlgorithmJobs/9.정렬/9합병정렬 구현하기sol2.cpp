#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
	int n;
	int d[100100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &d[i]);
	}
	sort(d, d + n);
	for (int i = 0; i < n; i++) {
		printf("%d ", d[i]);
	}

	return 0;
}