#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<long long>v;

	int n;
	cin >> n;

	v.push_back(-1000000001);
	for (int i = 1 ; i <= n; i++) {
		int a;
		cin >> a;

		if (a > v[v.size() - 1])
			v.push_back(a);
		else {
			int right = lower_bound(v.begin(), v.end(), a) - v.begin();
			v[right] = a;
		}
	}
	cout << v.size() - 1;
}
