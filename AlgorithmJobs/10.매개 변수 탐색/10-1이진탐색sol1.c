#include <stdio.h>
int n, q;
int arr[100000];
int quest[100000];
int binarySearch(int arr[], int mystart, int myend, int value) {
	if (mystart > myend)return -1;

	int mid = (mystart + myend) / 2;

	if (arr[mid] == value)return mid;
	else if (arr[mid] >= value)return binarySearch(arr, mystart, mid - 1, value);
	else return binarySearch(arr, mid + 1, myend, value);

	return -1;
}
int main() {
	scanf("%d %d", &n, &q);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < q; i++) {
		scanf("%d", &quest[i]);

		if (binarySearch(arr, 0, n, quest[i]) == -1) {
			printf("NO");
		}
		else
			printf("YES");

		printf("\n");
	}


	//Please Enter Your Code Here

	return 0;
}