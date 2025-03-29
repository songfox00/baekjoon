#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, t;
	cin >> n;

	int res = (n - 1) * 8;
	for (int i = 0; i < n; i++) {
		cin >> t;
		res += t;
	}

	cout << res / 24 << ' ' << res % 24;

	return 0;
}