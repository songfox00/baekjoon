#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double a;
	cin >> a;

	cout << fixed;
	cout.precision(10);
	cout << 100 / a << '\n' << 100 / (100 - a);

	return 0;
}