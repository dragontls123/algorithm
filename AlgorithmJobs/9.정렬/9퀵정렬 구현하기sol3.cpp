#include <stdio.h>
#include <algorithm>
using namespace std;
int arrr[100000];


int main() {
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arrr[i]);
	}
	sort(arrr, arrr + n);

	for (int i = 0; i < n; i++) {
		printf("%d ", arrr[i]);
	}
	//Please Enter Your Code Here

	return 0;
}