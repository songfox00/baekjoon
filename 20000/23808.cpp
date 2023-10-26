#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n * 5; j++) {
			if (j <= n || j > n * 4) cout << '@';
			else cout << ' ';
		}
		cout << '\n';
	}
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n * 5; j++) {
			if (j <= n || j > n * 4) cout << '@';
			else cout << ' ';
		}
		cout << '\n';
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 5; j++) {
			cout << '@';
		}
		cout << '\n';
	}
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n * 5; j++) {
			if (j <= n || j > n * 4) cout << '@';
			else cout << ' ';
		}
		cout << '\n';
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 5; j++) {
			cout << '@';
		}
		cout << '\n';
	}

	return 0;
}