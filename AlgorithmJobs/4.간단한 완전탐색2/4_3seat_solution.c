#include <stdio.h>
int d[1010][1010];
int x, y, k, xcount, ycount;
int main() {
	scanf("%d %d %d", &x, &y, &k);
	//Please Enter Your Code Here
	int xtemp = 1;
	int ytemp = 0;
	int xcount = x - 1, ycount = y;
	int temp = 0;
	while (temp < x * y) {
		for (int i = 0; i < ycount; i++) {
			d[xtemp][++ytemp] = ++temp;
			if (temp == k) {
				printf("%d %d", xtemp, ytemp);
				return 0;
			}
		}
		ycount--;
		for (int i = 0; i < xcount; i++) {
			d[++xtemp][ytemp] = ++temp;
			if (temp == k) {
				printf("%d %d", xtemp, ytemp);
				return 0;
			}
		}
		xcount--;
		for (int i = 0; i < ycount; i++) {
			d[xtemp][--ytemp] = ++temp;
			if (temp == k) {
				printf("%d %d", xtemp, ytemp);
				return 0;
			}
		}
		ycount--;
		for (int i = 0; i < xcount; i++) {
			d[--xtemp][ytemp] = ++temp;
			if (temp == k) {
				printf("%d %d", xtemp, ytemp);
				return 0;
			}
		}
		xcount--;
	}
	
	printf("0");
	return 0;
}