#include <stdio.h>
int arrr[100000];

int getLeft(int arr[], int s, int e, int pivot, int result[]) {
	int index = 0;

	for (int i = s; i <= e; i++) {
		if (arr[i] <= pivot) {
			result[index] = arr[i];
			index++;
		}
	}
	return index;
}

int getRight(int arr[], int s, int e, int pivot, int result[]) {
	int index = 0;

	for (int i = s; i <= e; i++) {
		if (arr[i] > pivot) {
			result[index] = arr[i];
			index++;
		}
	}
	return index;
}

void quicksort(int arr[], int s, int e) {
	if (s >= e)
		return;

	int pivot = arr[s];
	int left[100000], right[100000];
	int l = getLeft(arr, s + 1, e, pivot, left);
	int r = getRight(arr, s + 1, e, pivot, right);

	for (int i = 0; i < l; i++) {
		arr[s + i] = left[i];
	}

	arr[s + l] = pivot;

	for (int i = 0; i < r; i++) {
		arr[s + i + l + 1] = right[i];
	}

	quicksort(arr, s, s + l - 1);
	quicksort(arr, s + l + 1, e);

}

int main() {
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arrr[i]);
	}
	quicksort(arrr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%d ", arrr[i]);
	}
	//Please Enter Your Code Here

	return 0;
}