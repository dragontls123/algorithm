#include <stdio.h>
#define MAX 100
#C언어에서는 struct s[const] 선언이 불가능
#CPP에서는 struct type casting을 해주지만 C는 해주지 않기 때문에 struct 선언시 반드시 struct를 붙여야함
#또는 typedef를 사용하면 cpp, c의 차이를 없앨 수 있음
struct Tree {
	int left;
	int right;
};

struct Tree tree[MAX];
void preorder(int x) {
	if (tree[x].left == -1 && tree[x].right == -1) {
		printf("%d ", x);
	}
	else {
		printf("%d ", x);
		if (tree[x].left != -1) {
			preorder(tree[x].left);
		}
		if (tree[x].right != -1) {
			preorder(tree[x].right);
		}
	}
}
void inorder(int x) {
	if (tree[x].left == -1 && tree[x].right == -1) {
		printf("%d ", x);
	}
	else {
		if (tree[x].left != -1) {
			inorder(tree[x].left);
		}
		printf("%d ", x);

		if (tree[x].right != -1) {
			inorder(tree[x].right);
		}
	}

}
void postorder(int x) {
	if (tree[x].left == -1 && tree[x].right == -1) {
		printf("%d ", x);
	}
	else {
		if (tree[x].left != -1) {
			postorder(tree[x].left);
		}


		if (tree[x].right != -1) {
			postorder(tree[x].right);
		}
		printf("%d ", x);
	}


}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		tree[a].left = b;
		tree[a].right = c;

	}
	preorder(0);
	printf("\n");
	inorder(0);
	printf("\n");
	postorder(0);

	//Please Enter Your Code Here

	return 0;
}