#include<iostream>

using namespace std;

int Parent[10001];
bool visit[10001] = { false, };
int price[10001];

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

	if (price[x] > price[y]) {
		price[x] = y;
		Parent[x] = y;
	}
	else {
		price[y] = x;
		Parent[y] = x;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n, m, k;
	cin >> n >> m >> k;

	for (int i = 1; i <= n; i++) {
		cin >> price[i];
		Parent[i] = i;
	}

	int res =0;
	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;

		Union(a, b);
	}

	for (int i = 1; i <= n; i++) {
		if (!visit[Find(i)]) {
			visit[Find(i)] = true;
			res += price[Find(i)];
		}
	}

	if (res <= k)
		cout << res;
	else
		cout << "Oh no" << '\n';
	return 0;
}