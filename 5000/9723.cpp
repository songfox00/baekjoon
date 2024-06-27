#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t, a[3];
	string ans;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		cin >> a[0] >> a[1] >> a[2];

		ans = "YES";
		sort(a, a + 3);
		if (a[2] * a[2] != a[0] * a[0] + a[1] * a[1])
			ans = "NO";
		cout << "Case #" << i << ": " << ans << '\n';
	}

	return 0;
}