#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int tmp[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int T;
	cin >> T;
	while (T--) {
		int y, m;
		cin >> y >> m;
		if (m == 1) {
			cout << y - 1 << " " << 12 << " " << 31;
		}
		else {
			cout << y << " " << m - 1 << " ";
			if (m == 3 && ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0)) {
				cout << 29;
			}
			else {
				cout << tmp[m - 1];
			}
		}
		cout << "\n";
	}


	return 0;
}