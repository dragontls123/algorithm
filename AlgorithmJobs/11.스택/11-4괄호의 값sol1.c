#include <stdio.h>
#include <string.h>
int main() {

	char paren[50];
	int paren_len;
	int mystack[50], top = 0;
	scanf("%s", &paren);
	paren_len = strlen(paren);

	for (int i = 0; i < paren_len; i++) {

		if (paren[i] == '(' || paren[i] == '[') {
			if (paren[i] == '(') {
				mystack[top++] = -1;
			}
			else
				mystack[top++] = -2;
		}

		else {
			if (top == 0) {
				printf("0\n");
				return 0;
			}

			if (mystack[top - 1] == -1 || mystack[top - 1] == -2) {
				if (paren[i] == ')' && mystack[top - 1] == -1) {
					mystack[--top] = 0;
					mystack[top++] = 2;
				}
				else if (paren[i] == ']' && mystack[top - 1] == -2) {
					mystack[--top] = 0;
					mystack[top++] = 3;
				}
				else {
					printf("0\n");
					return 0;

				}
			}

			else {
				int v = mystack[top - 1];
				mystack[--top] = 0;
				if (paren[i] == ')' && mystack[top - 1] == -1) {
					mystack[--top] = 0;
					mystack[top++] = 2 * v;
				}
				else if (paren[i] == ']' && mystack[top - 1] == -2) {
					mystack[--top] = 0;
					mystack[top++] = 3 * v;
				}
				else {
					printf("0\n");
					return 0;
				}
			}


			if (top >= 2 && mystack[top - 1] > 0 && mystack[top - 2] > 0) {
				mystack[top - 2] += mystack[top - 1];
				mystack[--top] = 0;
			}
		}

	}
	if (top == 1 && mystack[0] > 0) {
		printf("%d", mystack[0]);
	}
	else {
		printf("0\n");
		return 0;

	}

	//Please Enter Your Code Here

	return 0;
}