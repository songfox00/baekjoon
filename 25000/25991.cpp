#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n; cin >> n;

	double volume = 0.0;

	for (int i = 0; i < n; i++) {
		double len; cin >> len;
		volume += pow(len, 3);
	}

	double ans = pow(volume, 1.0 / 3);
	cout << fixed;
	cout.precision(6);
	cout << ans << "\n";

	return 0;
}