#include<iostream>
#define MOD 1000000007

using namespace std;

int n, m, k;
long long tree[1<<21];
int arr[1000002];

void build_segtree(int node_idx, int node_left, int node_right) {
	if (node_left == node_right) {
		tree[node_idx] = arr[node_left];
		return;
	}

	int mid = (node_left + node_right) / 2;
	build_segtree(node_idx * 2, node_left, mid);
	build_segtree(node_idx * 2 + 1, mid + 1, node_right);
	tree[node_idx] = (tree[node_idx * 2] * tree[node_idx * 2 + 1])%MOD;
}

void update(int node_idx, int node_left, int node_right, int update_idx, long long val) {
	if (node_left > update_idx || node_right < update_idx)
		return;
	if (node_left == update_idx && update_idx == node_right) {
		tree[node_idx] = val;
		return;
	}
	int mid = (node_left + node_right) / 2;
	update(node_idx * 2, node_left, mid, update_idx, val);
	update(node_idx * 2 + 1, mid + 1, node_right, update_idx, val);
	tree[node_idx] = tree[node_idx * 2] * tree[node_idx * 2 + 1]%MOD;
}

long long query(int node_idx, int node_left, int node_right, int query_left, int query_right) {
	if (node_left > query_right || node_right < query_left)
		return 1;
	if (query_left <= node_left && node_right <= query_right)
		return tree[node_idx]%MOD;
	int mid = (node_left + node_right) / 2;
	return (query(node_idx * 2, node_left, mid, query_left, query_right) *
		query(node_idx * 2 + 1, mid + 1, node_right, query_left, query_right)) % MOD;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> n >> m >> k;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	build_segtree(1, 1, n);
	
	for (int i = 0; i < m + k; i++) {
		int a, b, c;
		cin >> a >> b >> c;

		if (a == 1) {
			update(1, 1, n, b, c);
		}
		else {
			cout<<query(1, 1, n, b, c)<<'\n';
		}
	}
}