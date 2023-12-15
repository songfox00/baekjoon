#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, x;
	int t[200];
	cin >> n >> x;

	for (int i = 0; i<n; i++) {
		cin >> t[i];
	}

	int i = 0;
	while (1) {
		if (t[i] < x) {
			cout << i + 1;
			break;
		}
		if (i == n - 1) {
			i = 0;
			x += 1;
			continue;
		}
		i += 1;
		x += 1;
	}

	return 0;
}