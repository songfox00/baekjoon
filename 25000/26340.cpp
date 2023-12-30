#include <iostream>

using namespace std;

int main()
{
	int n, a, b, cnt;
	cin >> n;

	while (n--) {
		cin >> a >> b >> cnt;
		
		cout << "Data set: " << a << ' ' << b << ' ' << cnt << '\n';

		for (int i = 0; i < cnt; i++) {
			if (a >= b) {
				a /= 2;
			}
			else
				b /= 2;
		}

		if (a > b)
			cout << a << ' ' << b << "\n\n";
		else
			cout << b << ' ' << a << "\n\n";
	}

	return 0;
}