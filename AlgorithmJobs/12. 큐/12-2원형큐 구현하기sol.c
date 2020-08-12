#include <stdio.h>
struct qu {
	int data[10000];
	int front, rear;
	int capacity;

	void create(int y) {
		capacity = y;
		front = 0;
		rear = 0;
	}

	void push(int y) {
		if (rear - front >= capacity) {
			printf("Overflow\n");

		}
		else {
			data[rear] = y;
			rear++;
		}
	}

	void pop() {
		if (rear <= front) {
			printf("Underflow\n");
		}
		else {
			//data[front]=0;
			front++;
		}
	}

	void frontout() {
		if (rear <= front) {
			printf("NULL\n");
		}
		else {
			printf("%d\n", data[front]);
		}
	}

};

int main() {
	int n, m;
	qu q;
	int t, tt;
	scanf("%d %d", &n, &m);
	q.create(n);
	for (int i = 0; i < m; i++) {

		scanf("%d", &t);

		if (t == 1) {
			scanf("%d", &tt);
			q.push(tt);

		}

		else if (t == 2) {
			q.pop();
		}

		else if (t == 3) {
			q.frontout();
		}
	}

	return 0;
}