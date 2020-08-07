
#include <stdio.h>
int pa(int n, int r) {
	int t;
	if (r == 0)return 1;
	if (n == r)return 1;
	t = pa(n - 1, r) + pa(n - 1, r - 1);
	return t;

}
int main() {

	int n, r;
	scanf("%d %d ", &n, &r);
	printf("%d", pa(n, r));
	return 0;
}
