#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t, n, l1, l2, a, b;

	cin >> t;

	for (int i = 1; i <= t; i++) {
		cin >> n >> l1 >> l2;
		for (int j = 0; j < n; j++) cin >> a >> b;
		cout << "Material Management " << i << '\n';
		cout << "Classification ---- End!\n";
	}

	return 0;
}