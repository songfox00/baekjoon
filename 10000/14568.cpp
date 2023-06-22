#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n, ans = 0;
	cin >> n;

	for (int i = 1; i <= 100; i++)
		for (int j = 1; j <= 100 - i; j++)
			for (int k = 1; k <= 100 - i - j; k++)
				if (i >= j + 2 && j != 0 && k != 0 && k % 2 == 0 && i + j + k == n)
					ans++;

	cout << ans << '\n';

	return 0;
}