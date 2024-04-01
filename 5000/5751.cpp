#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;

	while (cin >> n) {
		if (!n) 
			break;

		int johnWin = 0, maryWin = 0;

		for (int i = 0, x; i < n; i++) {
			cin >> x;
			if (!x) 
				maryWin++;
			else 
				johnWin++;
		}
		cout << "Mary won " << maryWin << " times and John won " << johnWin << " times\n";
	}

	return 0;
}