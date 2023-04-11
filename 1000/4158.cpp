#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, x;

	while (true) {
		int cnt = 0;
		vector<int>v;

		cin >> a >> b;

		if (a == 0 && b == 0)
			break;

		for (int i = 0; i < a; i++) {
			cin >> x;

			v.push_back(x);
		}

		for (int i = 0; i < b; i++) {
			cin >> x;

			if (binary_search(v.begin(), v.end(), x)) {
				cnt++;
			}
		}

		cout << cnt << '\n';
	}
}