#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	double area, base;

	cout << fixed;
	cout.precision(2);
	for (int i = 0; i < n; i++) {
		cin >> area >> base;

		cout << "The height of the triangle is "<<area / base * 2<<" units\n";
	}

	return 0;
}