#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int cntCase; cin >> cntCase;

	for (int t = 0; t < cntCase; t++) {
		int n; cin >> n;

		vector<int> w(n);
		for (int i = 0; i < n; i++)
			cin >> w[i];

		int torque = 0;
		for (int i = 0; i < n; i++)
			torque += 100 * w[i];

		if (torque == 0) cout << "Equilibrium\n";
		else if (torque > 0) cout << "Right\n";
		else cout << "Left\n";
	}

	return 0;
}