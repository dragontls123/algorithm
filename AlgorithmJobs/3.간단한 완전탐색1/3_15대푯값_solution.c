#include <stdio.h>
int sum = 0;
int t[110];

int main() {

	int temp;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &temp);
		sum += temp;
		t[temp / 10]++;
	}
	printf("%d\n", sum / 10);
	int max = 0, maxi;
	for (int i = 0; i < 100; i++) {
		if (t[i] > max) {
			max = t[i];
			maxi = i;
		}
	}
	printf("%d", maxi * 10);
	return 0;
}