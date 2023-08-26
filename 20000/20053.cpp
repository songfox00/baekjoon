#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t, n, a;
	cin >> t;

	while (t--) {
		cin >> n;

		int maxN = -1000000, minN = 1000000;
		for (int i = 0; i < n; i++) {
			cin >> a;

			if (maxN < a)
				maxN = a;
			if (minN > a)
				minN = a;
		}

		cout << minN << ' ' << maxN << '\n';
	}

	return 0;
}