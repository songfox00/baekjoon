#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n, m, a;
	cin >> t;

	while (t--) {
		cin >> n;

		vector<int>v;
		for (int i = 0; i < n; i++) {
			cin >> a;

			v.push_back(a);
		}

		sort(v.begin(), v.end());

		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> a;

			if (binary_search(v.begin(), v.end(), a))
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
	}
}