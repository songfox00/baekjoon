#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m;
vector<int>v;

int main() {
	cin >> n >> m;

	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	long long low = 1, high = 1e18, mid, sum, ans;
	while (high >= low) {
		mid = (high + low) / 2;
		sum = 0;
		for (int i = 0; i < n; i++) {
			sum += mid / v[i];
			if (sum >= m)
				break;
		}
		if (sum >= m) {
			ans = mid;
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	cout << ans;
}