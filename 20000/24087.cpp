#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int s, a, b;
	cin >> s >> a >> b;

	int res = 250;
	s -= a;
	while (s) {
		if (s <= 0)
			break;

		s -= b;
		res += 100;
	}

	cout << res;

	return 0;
}