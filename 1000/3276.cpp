#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int a = 1, b = 1, n;
	cin >> n;

	while (a*b < n) {
		if (a > b)
			b++;
		else
			a++;
	}

	cout << a << ' ' << b;

	return 0;
}