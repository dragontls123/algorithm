#include <stdio.h>
int n;
int d;
int ds, db;
int strike = 0;
int ball = 0;
int arr[1000];
int first, second, third;
int main() {
	int count = 0;
	int result = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &d, &ds, &db);

		for (int j = 1; j <= 9; j++) {
			for (int k = 1; k <= 9; k++) {
				for (int l = 1; l <= 9; l++) {
					if (j == k || j == l || l == k)continue;
					strike = 0;
					ball = 0;

					first = d / 100;
					second = (d % 100) / 10;
					third = d % 10;

					if (first == j)strike++;
					if (second == k)strike++;
					if (third == l)strike++;

					if (first == k || first == l)ball++;
					if (second == j || second == l)ball++;
					if (third == k || third == j)ball++;

					if (strike == ds && ball == db) {
						count++;
						arr[100 * j + 10 * k + l]++;
					}

				}
			}
		}

	}
	for (int i = 0; i < 1000; i++) {
		if (arr[i] == n)
			result++;
	}
	printf("%d", result);
	return 0;
}