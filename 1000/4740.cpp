#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	string str;

	while (getline(cin, str)) {
		if (str == "***")
			break;

		reverse(str.begin(), str.end());
		cout << str << '\n';
	}

	return 0;
}