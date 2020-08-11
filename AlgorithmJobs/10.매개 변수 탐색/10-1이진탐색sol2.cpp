#include <stdio.h>
#include <algorithm>
using namespace std;
int n, q;
int arr[100000];
int quest[100000];

int main() {
	scanf("%d %d", &n, &q);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < q; i++) {
		scanf("%d", &quest[i]);

		if (!binary_search(arr, arr + n, quest[i])) {
			printf("NO");
		}
		else
			printf("YES");

		printf("\n");
	}


	//Please Enter Your Code Here

	return 0;
}