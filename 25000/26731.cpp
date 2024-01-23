#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;

	int arr[27] = { 0, };
	for (int i = 0; i < str.length(); i++) {
		arr[str[i] - 'A'] = 1;
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] == 0)
			cout << char('A' + i);
	}

	return 0;
}