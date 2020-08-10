#include <stdio.h>
void quickSort(int arr[], int left, int right) {
	int i = left, j = right;
	int pivot = arr[left];
	int temp;
	while (i <= j)
	{
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}

	/* recursion */
	if (left < j)
		quickSort(arr, left, j);

	if (i < right)
		quickSort(arr, i, right);
}
int main() {
	int n;
	int arrr[199990];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arrr[i]);
	}
	quickSort(arrr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%d ", arrr[i]);
	}
	//Please Enter Your Code Here

	return 0;
}