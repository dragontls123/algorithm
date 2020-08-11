#include <stdio.h>
#include <algorithm>
using namespace std;
int nn[300000], mm[500000];
int n, m;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &nn[i]);
	sort(nn, nn + n);
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &mm[i]);

		if (binary_search(nn, nn + n, mm[i]))
			printf("1\n");
		else
			printf("0\n");

	}

	return 0;
}