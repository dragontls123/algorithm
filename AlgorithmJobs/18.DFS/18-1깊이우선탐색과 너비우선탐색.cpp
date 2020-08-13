#include <stdio.h>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m;
vector <int> myGraph[1000100];
bool visited[1000100];

void DFS(int x) {
	visited[x] = true;
	printf("%d ", x);

	for (int i = 0; i < myGraph[x].size(); i++) {
		int y = myGraph[x][i];

		if (visited[y] == false) {
			DFS(y);
		}
	}
}

void BFS() {
	bool check[100010] = { 0, };
	queue <int> Queue;
	Queue.push(0);
	check[0] = true;

	while (!Queue.empty()) {
		int current = Queue.front();
		Queue.pop();
		printf("%d ", current);

		for (int i = 0; i < myGraph[current].size(); i++) {
			int next = myGraph[current][i];

			if (check[next] == false) {
				check[next] = true;
				Queue.push(next);
			}
		}
	}
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		myGraph[a].push_back(b);
		myGraph[b].push_back(a);

	}
	for (int i = 0; i <= n; i++)
		sort(myGraph[i].begin(), myGraph[i].end());

	DFS(0);
	printf("\n");
	BFS();
	return 0;
}