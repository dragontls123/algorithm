#include <stdio.h>
#include <string.h>
char arr[100000];
int main() {

	fgets(arr, 1000, stdin);
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == ' ')
			continue;
		printf("%c", arr[i]);
	}
	return 0;
}