#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int num, first;

	cin >> num;
	cin >> first;

	if (num > 5) 
		cout << "Love is open door" << endl;
	else {
		for (int i = 0; i < num - 1; i++) {
			if (first == 0) {
				cout << "1" << endl;
				first = 1;
			}
			else {
				cout << "0" << endl;
				first = 0;
			}
		}
	}

	return 0;
}