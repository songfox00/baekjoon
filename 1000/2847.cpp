#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int>v;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	int cnt = 0;
	for (int i = n - 2; i >= 0; i--) {
		if (v[i + 1] <= v[i]) 
			cnt += v[i] - (v[i + 1] - 1);
		v[i] = min(v[i], v[i + 1] - 1);
	}
	cout << cnt;
}
