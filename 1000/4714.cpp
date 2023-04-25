#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double x;

	while (cin >> x) {
		if (x == (-1.0))
			break;

		double moon = x*0.167;

		cout << fixed;
		cout.precision(2);
		cout << "Objects weighing "<<x<<" on Earth will weigh "<<moon<<" on the moon." << '\n';
	}
}