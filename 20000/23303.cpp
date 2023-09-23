#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	string str;
	getline(cin, str);

	if (str.find("D2") != string::npos || str.find("d2") != string::npos)
		cout << "D2";
	else
		cout << "unrated";
		

	return 0;
}