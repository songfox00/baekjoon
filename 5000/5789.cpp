#include<iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	string str;

	while (n--) {
		cin >> str;

		int len = str.length();
		if (str[len / 2 - 1] == str[len / 2])
			cout << "Do-it\n";
		else
			cout << "Do-it-Not\n";
	}

	return 0;
}