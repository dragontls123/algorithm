#include <stdio.h>
int n, k;
int arr[100];
bool check[100];
void tobin(int length, int one) {
	
	if (length >= k) {

		for (int i = 0; i < n; i++)
			printf("%d", arr[i]);
		printf("\n");
		return;
	}
	else {
		for (int i = one; i < n; i++) {
			int temp = 0 + i;
			if (check[i] == false) {
				check[i] = true;
				arr[temp] = 1;
				tobin(length + 1, temp + 1);

				check[i] = false;
				arr[temp] = 0;
			}
		}
	}

}
int main() {
	scanf("%d %d", &n, &k);
	tobin(0, 0);
	return 0;
}