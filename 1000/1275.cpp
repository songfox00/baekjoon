#include<iostream>
#define MOD 1000000007

using namespace std;

int n, q;
long long tree[1<<21];
int arr[1000002];

void build(int node, int lnode, int rnode) {
	if (lnode == rnode) {
		tree[node] = arr[lnode];
		return;
	}

	int mid = (lnode + rnode) / 2;
	build(node * 2, lnode, mid);
	build(node * 2 + 1, mid + 1, rnode);
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

void update(int node, int lnode, int rnode, int u_idx, long long val) {
	if (lnode > u_idx || rnode < u_idx)
		return;
	if (lnode == u_idx && u_idx == rnode) {
		tree[node] = val;
		return;
	}
	int mid = (lnode + rnode) / 2;
	update(node * 2, lnode, mid, u_idx, val);
	update(node * 2 + 1, mid + 1, rnode, u_idx, val);
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

long long query(int node, int lnode, int rnode, int lquery, int rquery) {
	if (lnode > rquery || rnode < lquery)
		return 0;
	if (lquery <= lnode && rnode <= rquery)
		return tree[node];
	int mid = (lnode + rnode) / 2;
	return query(node * 2, lnode, mid, lquery, rquery) +
		query(node * 2 + 1, mid + 1, rnode, lquery, rquery);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> n >> q;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	build(1, 1, n);
	
	for (int i = 0; i < q; i++) {
		int x, y, a, b;
		cin >> x >> y >> a >> b;

		if (x > y) {
			int tmp = x;
			x = y;
			y = tmp;
		}
		cout << query(1, 1, n, x, y) << '\n';
		update(1, 1, n, a, b);
	}
	return 0;
}