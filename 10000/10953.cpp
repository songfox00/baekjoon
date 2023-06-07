#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	string str;
	while (t--) {
		cin >> str;

		cout << (str[0] - '0') + (str[2] - '0') << '\n';
	}

	return 0;
}