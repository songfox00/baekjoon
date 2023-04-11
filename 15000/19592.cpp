#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double t, n, x, y;
	cin >> t;

	while (t--) {
		cin >> n >> x >> y;
		vector<double>v;

		int speed;
		for (int i = 0; i < n; i++) {
			double a;
			cin >> a;

			double time = x / a;
			if (i == n - 1) {
				speed = a;
				break;
			}

			v.push_back(time);
		}

		sort(v.begin(), v.end());

		if (x / speed < v[0]) {
			cout << 0 << '\n';
			continue;
		}
		
		if ((x - y) / speed + 1 >= v[0]) {
			cout << -1 << '\n';
			continue;
		}

		int left = 0, right = y; //속력
		while (left <= right) {
			int mid = (left + right) / 2;

			if ((x-mid)/speed + 1 < v[0]) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}
		
		cout << left << '\n';
	}
}