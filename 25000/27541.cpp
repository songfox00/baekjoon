#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	string str;
	cin >> n >> str;

	if (str[str.length() - 1] == 'G')
		cout << str.erase(str.length() - 1, 1);
	else
		cout << str + 'G';

	return 0;
}