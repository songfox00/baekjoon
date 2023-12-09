#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n; cin >> n;

	double defenseIgRate = 0;
	for (int i = 0; i < n; i++) {
		int effPotion; 
		cin >> effPotion;
		defenseIgRate = (effPotion + defenseIgRate) - ((defenseIgRate * effPotion) / 100);

		cout << fixed;
		cout.precision(6);
		cout << defenseIgRate << "\n";
	}

	return 0;
}