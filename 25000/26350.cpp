#include <iostream>
#include<vector>

using namespace std;

int main()
{
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		int d; 
		cin >> d;
		vector<int> coins(d);

		for (int j = 0; j < d; j++)
			cin >> coins[j];

		cout << "Denominations: ";
		for (int j = 0; j < d; j++)
			cout << coins[j] << " ";
		cout << "\n";

		bool check = true;
		int prev = coins[0];
		for (int j = 1; j < d; j++) {
			if (coins[j] < 2 * prev) {
				check = false;
				break;
			}
			prev = coins[j];
		}

		if (check)
			cout << "Good coin denominations!\n";
		else 
			cout << "Bad coin denominations!\n";
		if (i != n - 1) 
			cout << "\n";
	}

	return 0;
}