#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<pair<int, int>>v;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n,a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back({ b,a });
	}
	sort(v.begin(), v.end());

	a = 0, b = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].second >= a) {
			b++;
			a = v[i].first;
		}
	}

	cout << b;
	return 0;
}
