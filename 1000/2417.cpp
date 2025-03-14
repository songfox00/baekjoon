#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n, q;

	cin >> n;

	q = sqrt(n);

	if (q*q < n)
		q++;

	cout << q;

	return 0;
}