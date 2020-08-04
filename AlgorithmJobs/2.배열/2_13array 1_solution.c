#include <stdio.h>
int n, m;
int main() {

	//Please Enter Your Code Here
	scanf("%d %d", &n, &m);
	int temp = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", temp);
			temp++;
		}printf("\n");
	}
	return 0;
}