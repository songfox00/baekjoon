#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int c, d;
	while (cin >> c >> d) {
		if (c == 0 && d == 0) break;
		int ParsTel = 30 * c + 40 * d;
		int ParsCell = 35 * c + 30 * d;
		int ParsPhone = 40 * c + 20 * d;

		int minCost = min({ ParsTel, ParsCell,ParsPhone });
		cout << minCost << "\n";
	}

	return 0;
}