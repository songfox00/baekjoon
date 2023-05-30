#include <iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;
	cin.ignore();

	while (n--) {
		string str;
		getline(cin, str);

		if (isupper(str[0]))
			cout << str;
		else {
			str[0] -= 32;
			cout << str;
		}
		cout << '\n';
	}

	return 0;
}
