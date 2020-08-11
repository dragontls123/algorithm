#include <stdio.h>
#include <algorithm>
using namespace std;
int nn[100000];
int qq[100000];
int n, q;
int count(int arr[], int x, int n)
{
	int* low = lower_bound(arr, arr + n, x);
	int* high = upper_bound(low, arr + n, x);
	return high - low;
}
int main() {
	scanf("%d %d", &n, &q);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nn[i]);
	}
	sort(nn, nn + n);
	for (int i = 0; i < q; i++) {
		scanf("%d", &qq[i]);
		printf("%d\n", count(nn, qq[i], n));
	}
	//Please Enter Your Code Here

	return 0;
}