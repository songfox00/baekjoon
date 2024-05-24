#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t, sum;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		cin >> sum;

		cout << "Case " << i << ":\n";
		for (int j = 1; j <= sum / 2; j++) {
			if (sum - j > 6) 
				continue;
			cout << "(" << j << "," << sum - j << ")\n";
		}
	}

	return 0;
}