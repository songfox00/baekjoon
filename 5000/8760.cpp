#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int z, w, k;
	cin >> z;

	while (z--) {
		cin >> w >> k;

		cout << w*k / 2 << '\n';
	}

	return 0;
}