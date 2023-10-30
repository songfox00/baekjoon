#include <iostream>
#include<string>
#include<vector>

using namespace std;

int n;

void func1() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 5; j++) {
			cout << "@";
		}
		cout << '\n';
	}
}
void func2() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "@";
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