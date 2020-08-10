#include <stdio.h>
#include <string.h>
char arr[1000];
int main() {
	fgets(arr, 1000, stdin);
	int t = 1;
	for (int i = 0; i < strlen(arr); i++) {
		t = 1;
		while (arr[i] == arr[i + t]) {
			t++;
		}
		if (t > 1)
			printf("%d%c", t, arr[i]);
		else
			printf("%c", arr[i]);
		i += (t - 1);
	}
	return 0;
}