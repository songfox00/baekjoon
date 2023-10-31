#include <iostream>
#include <cmath>

using namespace std;

int n;

void func1() {
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n * 5; j++) {
			if (j <= n || j > n * 4) cout << '@';
			else cout << ' ';
		}
		cout << '\n';
	}
}

void func2() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 5; j++) {
			cout << '@';
		}
		cout << '\n';
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	cin >> n;
	func1();
	func2();
	func1();
	func2();
	func1();

	return 0;
}