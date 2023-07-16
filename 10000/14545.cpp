#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int p; 
	cin >> p;

	for (int i = 0; i < p; i++) {
		long long l; 
		cin >> l;

		cout << l * (l + 1) * (2 * l + 1) / 6 << "\n";
	}

	return 0;
}