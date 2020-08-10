#include <stdio.h>

void merging(int arr[], int s1, int e1, int s2, int e2) {
	int p, q;
	int temp[100000];
	int temp_inx = 0;
	p = s1;
	q = s2;
	while (p <= e1 && q <= e2) {
		if (arr[p] <= arr[q]) {
			temp[temp_inx++] = arr[p];
			p++;
		}
		else {
			temp[temp_inx++] = arr[q];
			q++;
		}
	}
	if (p > e1) {
		for (int i = q; i <= e2; i++) {
			temp[temp_inx++] = arr[i];
		}
	}
	else {
		for (int i = p; i <= e1; i++) {
			temp[temp_inx++] = arr[i];
		}
	}
	for (int i = s1; i <= e2; i++) {
		arr[i] = temp[i - s1];

	}

}
void mergeSort(int arr[], int s, int e) {
	if (s >= e)
		return;

	int mid = (s + e) / 2;
	mergeSort(arr, s, mid);
	mergeSort(arr, mid + 1, e);
	merging(arr, s, mid, mid + 1, e);


}

int main() {
	int n;
	int arrr[100000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arrr[i]);

	mergeSort(arrr, 0, n - 1);

	for (int i = 0; i < n; i++)
		printf("%d ", arrr[i]);
	return 0;
}