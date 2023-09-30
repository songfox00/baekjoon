#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, m, l;
	cin >> n >> m >> l;
	vector<int>v;
	v.push_back(0);
	v.push_back(l);

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	int left = 1, right = l-1;
	int mid, res=9999;

	while (left <= right) {
		mid = (left + right) / 2;

		int val = 0;
		for (int i = 1; i < v.size(); i++) {
			int dis = v[i] - v[i - 1];

			val += (dis / mid);
			if (dis % mid == 0)
				val--;
		}

		if (val > m)
			left = mid + 1;
		else {
			right = mid - 1;
			res = min(mid,res);
		}
	}

	cout << res << '\n';

	return 0;
}