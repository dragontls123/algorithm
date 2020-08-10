#include <stdio.h>
#include <string.h>
int n;
char temp[110];
char arr[110][110];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strcmp(arr[i], arr[j]) > 0) {
				strcpy(temp, arr[j]);
				strcpy(arr[j], arr[i]);
				strcpy(arr[i], temp);
			}

		}
	}
	for (int i = 0; i < n; i++) {
		printf("%s\n", arr[i]);
	}



	return 0;
}