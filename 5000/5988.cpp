#include <iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;
	string str;

	while (n--) {
		cin >> str;

		int cnt = str[str.length() - 1]-'0';

		if (cnt % 2 == 0)
			cout << "even\n";
		else
			cout << "odd\n";
	}

	return 0;
}
