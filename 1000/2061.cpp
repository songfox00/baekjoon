#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	string str;
	int l;
	cin >> str >> l;
	for (int i = 2, j; i < l; i++) {
		int ans = 0, tmp = 1;
		for (int j = str.length() - 1; j >= 0; j--) {
			ans = (ans + (str[j] - '0') * tmp) % i;
			tmp *= 10;
			tmp %= i;
		}
		if (ans == 0) {
			cout << "BAD " << i;
			return 0;
		}
	}
	cout << "GOOD";

	return 0;
}