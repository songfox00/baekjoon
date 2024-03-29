#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		int cnt = 0;
		cin >> n;
		cout << "Pairs for " << n << ": ";
		for (int i = 1; i <= 12; i++)
			for (int j = 1; j <= 12; j++)
				if (i + j == n && i<j)
				{
					if (!cnt)
					{
						cnt++;
						cout << i << ' ' << j;
					}
					else
						cout << ", " << i << ' ' << j;
				}
		cout << '\n';
	}

	return 0;
}