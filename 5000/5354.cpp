#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		if (a == 1) {
			cout << "#\n\n";
			continue;
		}

		for (int j = 0; j < a; j++)
			cout << '#';
		cout << '\n';

		for (int j = 0; j < a - 2; j++) {
			cout << '#';
			for (int k = 0; k < a - 2; k++) {
				cout << 'J';
			}
			cout << "#\n";
		}

		for (int j = 0; j < a; j++)
			cout << '#';

		cout << "\n\n";
	}

	return 0;
}