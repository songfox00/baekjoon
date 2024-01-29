#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		switch (str[i]) {
		case 'a':
			str[i] = '4';
			break;
		case 'e':
			str[i] = '3';
			break;
		case 'i':
			str[i] = '1';
			break;
		case 'o':
			str[i] = '0';
			break;
		case 's':
			str[i] = '5';
			break;
		}
	}

	cout << str;

	return 0;
}