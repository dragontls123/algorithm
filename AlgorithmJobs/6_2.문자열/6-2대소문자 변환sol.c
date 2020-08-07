#include <stdio.h>
#include <string.h>
int main() {

	char arr[1000];
	fgets(arr, 1000, stdin);

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] >= 'a' && arr[i] <= 'z') {
			arr[i] = arr[i] - 32;
			printf("%c", arr[i]);
		}
		else if (arr[i] >= 'A' && arr[i] <= 'Z') {
			arr[i] = arr[i] + 32;
			printf("%c", arr[i]);
		}
		else
			printf("%c", arr[i]);
	}
	return 0;
}