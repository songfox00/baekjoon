#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (i > 0 && (str.size() - i) % 3 == 0) 
			cout << ',';
		cout << str[i];
	}
	cout << '\n';

	return 0;
}