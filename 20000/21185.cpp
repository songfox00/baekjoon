#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	if (n % 2) 
		cout << "Either";
	else {
		if (n * (n + 1) / 2 % 2) 
			cout << "Odd";
		else 
			cout << "Even";
	}

	return 0;
}