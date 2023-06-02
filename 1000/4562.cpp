#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	while (n--) {
		int x, y;
		cin >> x >> y;

		if (x >= y)
			cout << "MMM BRAINS\n";
		else
			cout << "NO BRAINS\n";
	}

	return 0;
}