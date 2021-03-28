#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	while (true) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		if (a == 0 && b == 0 && c == 0 && d == 0) {
			break;
		}

		int cnt = 0;
		while (true) {
			if (a == b && b == c && c == d)
				break;
			int temp = a;
			a = abs(a - b);
			b = abs(b - c);
			c = abs(c - d);
			d = abs(d - temp);
			cnt++;
		}

		cout << cnt<<'\n';
	}

	return 0;
}