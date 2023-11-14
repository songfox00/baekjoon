#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	long long sum = 0;
	for (int i = 1; i < n; i++) {
		sum += i;
	}

	cout << sum << '\n' << 2;

	return 0;
}