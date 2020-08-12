#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char str[100];

int main() {

	scanf("%s", &str);
	int pushcnt = 0, popcnt = 0;
	if (str[0] == ')' || str[strlen(str) - 1] == '(') { printf("NO"); return 0; }


	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '(') {
			pushcnt++;
		}
		if (str[i] == ')') {
			popcnt++;
		}
		if (pushcnt == popcnt) {
			pushcnt = 0;
			popcnt = 0;
			if (str[i + 1] == ')') { printf("NO"); return 0; }

		}
	}
	if (popcnt == pushcnt)
		printf("YES");
	else
		printf("NO");
	return 0;
}