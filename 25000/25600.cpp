#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a, d, g;
	vector<int>v;

	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> a >> d >> g;
		v[i] = a*(d + g);
		if (a == d + g)
			v[i] *= 2;
	}

	sort(v.begin(), v.end());

	cout << v[n - 1];

	return 0;
}