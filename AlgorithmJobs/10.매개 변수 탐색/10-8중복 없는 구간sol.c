#include <stdio.h>
int n;
int arr[100010];

int check(int t) {
	int x = 0;
	int cnt[100010] = { 0 };
	for (int i = 0; i < t; i++) {
		cnt[arr[i]]++;
	}

	for (int i = 0; i <= n; i++) {
		if (cnt[i] >= 2) {
			x++;
		}
	}
	
	if (x == 0)return 1;

	for (int i = 0; i < n - t; i++) {

		cnt[arr[i]]--;
		if (cnt[arr[i]] == 1)x--;
		
		cnt[arr[i + t]]++;
		if (cnt[arr[i + t]] == 2) x++;
		
		if (x == 0) return 1;

	}
	return 0;
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int s = 0;
	int e = n + 1;
	while (s + 1 < e) {
		int mid = (s + e) / 2;
	if (check(mid) == 1)
			s = mid;
		else
			e = mid;
		
	}

	printf("%d", s);

	return 0;
}