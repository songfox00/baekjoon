#include<iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	string str;

	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> str;
		cout << "String #" << i << "\n";
		for (int j = 0; j < str.length(); ++j) {
			cout << (char)((str[j] - 'A' + 1) % 26 + 'A');
		}
		cout << "\n\n";
	}

	return 0;
}