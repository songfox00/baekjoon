#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	double a, b;
	cout << fixed;
	cout.precision(1);

	while (n--) {
		cin >> a >> b;

		cout << abs(b - a) << '\n';
	}

	return 0;
}