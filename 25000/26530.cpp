#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	string s;
	double i, p;

	cin >> t;

	cout << fixed;
	cout.precision(2);

	while (t--) {
		cin >> n;
		double ans = 0;

		while (n--) {
			cin >> s >> i >> p;
			ans += i * p;
		}

		cout << '$' << ans << '\n';
	}

	return 0;
}