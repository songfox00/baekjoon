#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	string str;
	while (t--) {
		cin >> str;

		for (int i = 1; i < str.length(); i++) {
			if (str[i] == str[i - 1]) {
				str.erase(i,1);
				i--;
			}
		}

		cout << str << '\n';
	}

	return 0;
}