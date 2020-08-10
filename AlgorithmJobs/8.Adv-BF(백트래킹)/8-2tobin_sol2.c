#include <stdio.h>
int n, k;
int arr[100];
//bool check[100];
void tobin(int length, int one) {
	if (length == n) {
		if (one == k) {
			for (int i = 0; i < n; i++)
				printf("%d", arr[i]);
			printf("\n");
		}
		return;
	}

	if (one > k)
		return;

	arr[length] = 1;
	tobin(length + 1, one + 1);
	arr[length] = 0;
	tobin(length + 1, one);
	
}

}
int main() {
	scanf("%d %d", &n, &k);
	tobin(0, 0);
	return 0;
}