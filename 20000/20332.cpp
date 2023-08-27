#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, a, sum=0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;

		sum += a;
	}

	if (sum % 3 == 0)
		cout << "yes";
	else
		cout << "no";

	return 0;
}