#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, a, b;
	string diceNumName[7] = { "", "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh" };
	string sameDiceNumName[7] = { "", "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh" };

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;

		cout << "Case " << i << ": ";

		int small = min(a, b);
		int big = max(a, b);

		if (small == big) {
			cout << sameDiceNumName[small] << '\n';
			continue;
		}

		if (small == 5 && big == 6) {
			cout << "Sheesh Beesh\n";
			continue;
		}

		cout << diceNumName[big] << ' ' << diceNumName[small] << '\n';
	}

	return 0;
}