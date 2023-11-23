#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x, y;
	cin >> x >> y;

	int a = 100 - x;
	int b = 100 - y;
	int c = 100 - (a + b);
	int d = a*b;
	int q = d / 100;
	int r = d % 100;

	cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << '\n' << c + q << ' ' << r;

	return 0;
}