#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i == n)
			for (int i = 1; i <= 2 * n - 1; i++) cout << "*"; 
		else {
			for (int j = n - i; j > 0; j--)  
				cout << " "; 
			cout << "*";

			if (i != 1) {
				for (int j = 1; j <= (i - 1) * 2 - 1; j++) { cout << " "; }
				cout << "*";
			}
		}
		cout << '\n';
	}

	return 0;
}