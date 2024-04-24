#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x, y;
	cin >> x >> y;

	cout << "All positions change in year " << x << '\n';

	x += 60;
	while (x <= y) {
		cout << "All positions change in year " << x << '\n';
		x += 60;
	}

	return 0;
}