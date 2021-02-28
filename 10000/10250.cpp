#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int h, w, n;
		cin >> h >> w >> n;
		
		int room = 101;
		while (--n) {
			room += 100;
			if (room/100>h) {
				room -= h * 100;
				room++;
			}
		}
		cout << room<<'\n';
	}
	return 0;
}