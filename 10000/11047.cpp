#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cout.tie(NULL);

	int n, k, a;
	cin >> n >> k;

	vector<int>v;

	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	int cnt = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (k >= v[i]) {
			cnt += k / v[i];
			k %= v[i];
		}
	}
	cout << cnt;
	return 0;
}