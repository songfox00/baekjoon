#include<iostream>

using namespace std;

int Parent[1000001];

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

	if (x > y)
		Parent[y] = x;
	else {
		Parent[x] = y;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i <= n; i++) {
		Parent[i] = i;
	}

	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;

		if (a == 0)
			Union(b, c);
		else {
			if (Find(b) == Find(c))
				cout << "YES" << '\n';
			else
				cout << "NO" << "\n";
		}
	}
	return 0;
}