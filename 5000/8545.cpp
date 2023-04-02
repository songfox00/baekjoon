#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;

	for (int i = 2; i >= 0; i--)
		cout << str[i];

	return 0;
}