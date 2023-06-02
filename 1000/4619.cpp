#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int b, n;

	while (cin >> b >> n) {
		if (!b && !n) 
			break;

		int minDiff = 0x3f3f3f3f;
		int minVal = 0x3f3f3f3f;

		for (int a = 1; pow(a, n) <= 2000000; a++) {
			int diff = abs(pow(a, n) - b);
			if (diff < minDiff) 
				minDiff = diff, minVal = a;
		}
		cout << minVal << '\n';
	}

	return 0;
}