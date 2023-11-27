#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x, y;
	cin >> x >> y;

	if (x <= y)
		cout << y - x;
	else
		cout << x + y;

	return 0;
}