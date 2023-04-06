#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;

	int col = 1;
	int under = 0;

	for (int i = 6; i < str.length(); i++) {
		if (str[i] == '_')
			under++;
		else if (str[i] == ':')
			col++;
	}

	cout << str.length() + col + under * 5;

	return 0;
}