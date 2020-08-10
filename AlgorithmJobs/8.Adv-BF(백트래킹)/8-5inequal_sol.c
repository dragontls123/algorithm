#include <stdio.h>
int k;
bool check[100], check1[100];
char arr[100];
int result[100], result1[100];
bool purge = false;
bool purge1 = false;
void f(int index) {

	if (index > k) {
		if (purge)
			return;
		for (int i = 0; i < index; i++) {
			printf("%d", result[i]);
		}
		printf("\n");
		purge = true;
	}

	else {
		for (int i = 0; i <= 9; i++) {
			result[index] = i;
			if (check[i] == false) {
				check[i] = true;

				if (arr[index - 1] == '<') {
					if (index > 0 && result[index - 1] >= result[index]) {
						check[i] = false;

						continue;
					}
				}
				if (arr[index - 1] == '>') {
					if (index > 0 && result[index - 1] <= result[index]) {

						check[i] = false;

						continue;
					}
				}

				f(index + 1);

				check[i] = false;

			}
		}
	}
}
void ff(int index) {

	if (index > k) {
		if (purge1)
			return;
		for (int i = 0; i < index; i++) {
			printf("%d", result1[i]);
		}
		printf("\n");
		purge1 = true;
	}

	else {
		for (int i = 9; i >= 0; i--) {
			result1[index] = i;
			if (check1[i] == false) {
				check1[i] = true;

				if (arr[index - 1] == '<') {
					if (index > 0 && result1[index - 1] >= result1[index]) {
						check1[i] = false;

						continue;
					}
				}
				if (arr[index - 1] == '>') {
					if (index > 0 && result1[index - 1] <= result1[index]) {

						check1[i] = false;

						continue;
					}
				}

				ff(index + 1);

				check1[i] = false;

			}
		}
	}
}
int main() {
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf(" %c", &arr[i]);
	}
	ff(0);
	f(0);
	//Please Enter Your Code Here

	return 0;
}