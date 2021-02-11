#include<iostream>
#include<vector>

using namespace std;

struct TREENODE {
	int parent = -1;
	int child=0;
};
struct TREENODE tree[51];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, a, root;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		tree[i].parent = a;
		if (a == -1)
			root = i;
		else
			tree[a].child++;
	}
	int e;
	cin >> e;
	if (tree[e].parent >= 0)
		tree[tree[e].parent].child--;
	tree[e].parent = -2;

	int res = 0;
	for (int i = 0; i < n; i++) {
		if (tree[i].child)
			continue;
		a = tree[i].parent;
		while (a >= 0)
			a = tree[a].parent;
		if (a == -1)
			res++;
	}
	cout << res;
    return 0;
}