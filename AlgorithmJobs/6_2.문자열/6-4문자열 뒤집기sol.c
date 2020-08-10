#include <stdio.h>
#include <string.h>
int main() {


	char arr[1000];
	fgets(arr, 1000, stdin);

	for (int i = strlen(arr) - 1; i >= 0; i--) {
		printf("%c", arr[i]);
	}
	return 0;
}