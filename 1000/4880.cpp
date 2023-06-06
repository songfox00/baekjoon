#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int a, b, c;

	while (cin >> a >> b >> c) {
		if (a == 0 && b == 0 && c == 0)
			break;

		if (b - a == c - b)
			cout << "AP " << 2 * c - b << '\n';
		else
			cout << "GP " << c*(c / b) << '\n';
	}

	return 0;
}