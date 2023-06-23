#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	double t, a, b;

	cin >> t;
	while (t--) {
		cin >> a >> b;
		cout << (long long)ceil(a / b * a / b) << '\n';
	}

	return 0;
}