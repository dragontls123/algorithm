#include <stdio.h>
int n;
int m;
int ppt, t;

struct st {
	int index = 0;
	int d[1010];
	int capacity;

	void start(int qq) {
		capacity = qq;
	}

	void push(int q) {
		if (index == capacity) {
			printf("Overflow\n");
		}
		else {
			index++;
			d[index] = q;
		}
	}

	void pop() {
		if (index == 0) {
			printf("Underflow\n");
		}
		else {
			index--;
		}
	}

	void top() {
		if (index == 0) {
			printf("NULL\n");
		}
		else {
			printf("%d\n", d[index]);
		}
	}
};
int main() {
	scanf("%d %d", &n, &m);

	struct st stt;
	stt.start(n);

	for (int i = 0; i < m; i++) {
		scanf("%d", &ppt);

		if (ppt == 1) {
			scanf("%d", &t);

			stt.push(t);
		}
		else if (ppt == 2) {
			stt.pop();
		}
		else if (ppt == 3) {
			stt.top();
		}
	}
	return 0;
}