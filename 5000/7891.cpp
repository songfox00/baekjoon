#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	while (t--) {
		int a, b;
		cin >> a >> b;

		cout << a + b<<'\n';
	}

	return 0;
}