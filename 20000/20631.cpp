#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, ballPos, k, ans;
	vector <int> v;

	cin >> n >> ballPos >> k;
	v.resize(n + 1);

	for (int i = 1; i <= n; i++) {
		v[i] = i;
	}

	for (int i = 0, a, b; i < k; i++) {
		cin >> a >> b;
		swap(v[a], v[b]);
	}
	for (int i = 1; i <= n; i++) {
		if (v[i] == ballPos) {
			ans = i;
			break;
		}
	}

	cout << ans;

	return 0;
}