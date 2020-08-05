#include <stdio.h>
int d[1010];
int n, temp;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		d[temp]++;
		if (d[temp] > 2) {
			d[temp] = 2;
		}
	}
	int sum = 0;
	for (int i = 0; i < 1000; i++) {
		sum += d[i];
	}
	if (sum >= 6)printf("YES");
	else printf("NO");
	//Please Enter Your Code Here

	return 0;
}