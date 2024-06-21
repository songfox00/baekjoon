#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, a;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a;
		int sum = 0;

		for (int j = 1; j <= a; j++) {
			if (j % 2 != 0)
				sum += j;
		}

		cout << sum << '\n';
	}
	return 0;
}