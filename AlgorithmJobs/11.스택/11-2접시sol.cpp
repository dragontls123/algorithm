#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <stack>
using namespace std;

int result[100];
char str[100];
int stackresult[100];
int main() {
	int pushnum = 0;
	scanf("%s", &str);

	int index = 0;
	int sindex = 0;
	stack<int> st;

	for (int i = 0; i < strlen(str); i++) {

		int temp = str[i] - 'a' + 1;

		if (pushnum < temp) {

			for (int j = 0; j < temp - pushnum; j++) {
				result[index++] = 1;

			}
			for (int j = 0; j < temp; j++) {
				st.push(j);
			}
			pushnum = temp;
			result[index++] = 0;
			stackresult[sindex++] = st.top();
			st.pop();


		}
		else {
			result[index++] = 0;
			stackresult[sindex++] = st.top();

			st.pop();


		}
	}

	for (int i = 0; i < strlen(str); i++) {
		if (stackresult[i] != (str[i] - 'a')) {
			printf("impossible");
			return 0;
		}
	}

	for (int i = 0; i < index; i++) {
		if (result[i] == 1)
			printf("push\n");
		else
			printf("pop\n");
	}
	return 0;
}