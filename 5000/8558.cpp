#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	int sum = 1;
	for (int i = 2; i <= n; i++) {
		sum *= i;
	}

	cout << sum % 10;

	return 0;
}