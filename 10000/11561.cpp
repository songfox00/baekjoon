#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define ull unsigned long long

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	ull n;

	cin >> t;

	while (t--) {
		cin >> n;

		ull left = 1;
		ull right= 1e16;
		ull res = 0;
		while (left <= right) {
			ull mid = (left + right) / 2;
			if (mid *(mid + 1) / 2 <= n) {
				res = max(res, mid);
				left = mid + 1;
			}
			else
				right = mid - 1;
		}
		cout << res<<'\n';
	}
}