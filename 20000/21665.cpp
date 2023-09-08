#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int r, c, ans=0;
	char ori[101][101];

	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> ori[i][j];
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			char x;
			cin >> x;
			if (ori[i][j] == x) 
				ans++;
		}
	}
	cout << ans;

	return 0;
}