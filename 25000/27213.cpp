#include <iostream>

using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;

	int ans = 2 * m + 2 * n - 4;

	if (m == 1 || n == 1) 
		ans = m + n - 1;

	cout << ans << "\n";

	return 0;
}