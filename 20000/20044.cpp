#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int>v;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n ,a;
	cin >> n;
	n *= 2;

	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	a = 1234567891;
	for (int i = 0; i < n; i++) {
		a = min(a, v[i] + v[n - 1 - i]);
	}
	cout << a;
	return 0;
}
