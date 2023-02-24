#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main() {
	string str;
	cin >> str;

	string res = "";
	for (int i = 0; i < str.size(); i++) {
		if (isupper(str[i]))
			res += tolower(str[i]);
		else
			res += toupper(str[i]);
	}

	cout << res;
	return 0;
}