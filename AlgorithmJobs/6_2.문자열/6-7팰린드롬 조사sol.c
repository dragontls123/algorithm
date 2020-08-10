#include <stdio.h>
#include <string.h>
char arr[1000], temp[1000];
int main() {

	scanf("%s", &arr);
	int t = 0;
	for (int i = strlen(arr) - 1; i >= 0; i--) {
		temp[t++] = arr[i];

	}

	if (strcmp(temp, arr) == 0)
		printf("YES");
	else
		printf("NO");
	return 0;
}