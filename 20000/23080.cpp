#include <iostream>
#include <string>

using namespace std;
//스키테일 암호
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	string str;
	int i, k;

	cin >> k >> str;

	for (int i = 0; i < str.length(); i += k) {
		cout << str[i];
	}

	return 0;
}