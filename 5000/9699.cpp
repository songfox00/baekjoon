#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t, ans;
	cin >> t;

	for (int i = 1; i <= t; i++, ans = 0) {
		for (int i = 0, x; i < 5; i++)
			cin >> x, ans = max(ans, x);
		cout << "Case #" << i << ": " << ans << endl;
	}

	return 0;
}