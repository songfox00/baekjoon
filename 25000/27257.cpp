#include <iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int res = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '0')
			res++;
	}

	for (int i = str.length() - 1; i >= 0; i--) {
		if (str[i] == '0')
			res--;
		else break;
	}

	cout << res;

	return 0;
}