#include <stdio.h>
int a[20], b[20];
int awin = 0, bwin = 0;
int main() {

	//Please Enter Your Code Here
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < 10; i++)
		scanf("%d", &b[i]);
	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i])awin++;
		if (a[i] < b[i])bwin++;
	}
	if (awin > bwin)printf("A");
	if (awin < bwin)printf("B");
	if (awin == bwin)printf("D");
	return 0;
}