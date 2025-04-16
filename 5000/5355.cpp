#include <iostream>
#include <string>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	double n;
	string s;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		getline(cin, s);
		for (auto c : s) {
			if (c == '@')
				n *= 3;
			if (c == '%')
				n += 5;
			if (c == '#')
				n -= 7;
		}

		cout.precision(2);
		cout << fixed;

		cout << n << '\n';
	}

	return 0;
}