#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n; 
	cin >> n;
	int size = 5 * n;

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++) {
			if (i <= n || (size - 3 * n + 1 <= i && i <= size - 2 * n) || j <= n) 
				cout << "@";
		}
		cout << "\n";
	}

	return 0;
}