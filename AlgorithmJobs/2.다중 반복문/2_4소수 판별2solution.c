#include <stdio.h>
int n, m;
int main() {
	scanf("%d %d", &n, &m);
	//Please Enter Your Code Here
	for (int i = n; i <= m; i++) {
		int cnt = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				cnt++;
			}

		}if (cnt == 2)
			printf("%d ", i);

	}
	return 0;
}