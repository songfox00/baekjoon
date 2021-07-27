#include<iostream>
#include<vector>

using namespace std;

int Parent[100001];
bool check[100001];
vector<pair<int, int>>v;
vector<int>A;
int Size[100001];

int Find(int x) {
	if (x == Parent[x])
		return x;

	return Parent[x] = Find(Parent[x]);
}

void Union(int x, int y) {
	x = Find(x);
	y = Find(y);

	if (x == y)
		return;

	Parent[x] = y;
	Size[y] += Size[x];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n, m, q;
	cin >> n >> m >> q;

	for (int i = 0; i < n; i++) {
		Parent[i] = i;
		Size[i] = 1;
	}

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a-1,b-1 });
	}

	for (int i = 0; i < q; i++) {
		int a;
		cin >> a;
		A.push_back(a-1);
		check[a-1] = true;
	}

	for (int i = 0; i < m; i++) {
		if (!check[i])
			Union(v[i].first, v[i].second);
	}

	long long cnt = 0;
	for (int i = q-1; i >=0; i--) {
		int j = A[i];
		if (Find(v[j].first) != Find(v[j].second))
			cnt += Size[Find(v[j].first)] * Size[Find(v[j].second)];
		Union(v[j].first, v[j].second);
	}

	cout << cnt;
	return 0;
}