#include <stdio.h>
#define MAX 1000
int n, r;
bool check[MAX];
char arr[MAX];
void comb(int x) {
	if (x >= r) {
		printf("%s\n", arr);
	}
	else {
		for (int i = 0; i < n; i++) {
			char temp = 'a' + i;
			if (check[i] == false) {
				check[i] = true;
				arr[x] = temp;

				comb(x + 1);

				arr[x] = 0;
				check[i] = false;
			}
		}
	}
}
int main() {
	scanf("%d %d", &n, &r);
	comb(0);
	return 0;
}