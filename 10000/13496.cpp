#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, s, d, t, ans;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		cin >> n >> s >> d;
		ans = 0;
		for (int j = 0, a, b; j < n; j++) {
			cin >> a >> b;
			if (s * d >= a) ans += b;
		}
		cout << "Data Set " << i << ":\n" << ans << '\n' << '\n';
	}

	return 0;
}