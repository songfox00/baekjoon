#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int T;
	cin >> T;

	float half = (float)T / 2.0;


	cout << (int)(half*half + 0.5) << "\n";

	return 0;
}