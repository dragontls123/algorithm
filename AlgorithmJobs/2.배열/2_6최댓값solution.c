#include <stdio.h>
int d[10];
int main() {

	//Please Enter Your Code Here
	int max = 0, maxi;
	for (int i = 0; i < 9; i++) {

		scanf("%d", &d[i]);
		if (max < d[i]) {
			max = d[i];
			maxi = i;
		}
	}
	printf("%d\n%d", max, maxi + 1);
	return 0;
}