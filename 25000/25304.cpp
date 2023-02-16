#include<iostream>

using namespace std;

int main() {
	int x, n, a, b;
	cin >> x >> n;

	int res = 0;

	while (n--) {
		cin >> a >> b;
		res += a*b;
	}

	if (res == x)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}