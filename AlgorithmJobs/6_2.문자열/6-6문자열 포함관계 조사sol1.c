//strstr 함수 사용
#include <stdio.h>
#include <string.h>
char arr[1000];
char arr1[1000];
int main() {

	fgets(arr, 1000, stdin);
	scanf("%s", &arr1);
	char* ptr = strstr(arr, arr1);
	if (ptr != NULL) {
		printf("YES");
	}
	else
		printf("NO");

	return 0;
}