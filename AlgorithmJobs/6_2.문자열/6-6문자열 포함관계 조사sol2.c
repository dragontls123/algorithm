#include <stdio.h>
#include <string.h>
char arr[1000];
char arr1[1000];
int main() {

	fgets(arr, 1000, stdin);
	fgets(arr1, 1000, stdin);
	for (int i = 0; i < strlen(arr) - strlen(arr1); i++) {
		int c = 0;

		for (int j = 0; j < strlen(arr1); j++) {
			if (arr[i + j] == arr1[j]) {
				c++;
			}
		}

		if (c == strlen(arr1)) {
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}