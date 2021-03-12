#include<iostream>

using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;

	int a = k / m;
	int b = k - m*a;

	cout << a << ' ' << b;
	return 0;
}