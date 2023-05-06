#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a, b, c, d;
	cin >> n;

	while (n--) {
		cin >> a >> b >> c >> d;

		cout << a << ' ' << b + c + d << ' ';

		if (b >= 35 * 0.3 && c >= 25 * 0.3 && d >= 40 * 0.3 && b + c + d >= 55)
			cout << "PASS\n";
		else
			cout << "FAIL\n";
	}

	return 0;
}