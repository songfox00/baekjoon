#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	string str;
	int i, j;

	while (n--) {
		cin >> str >> i >> j;

		str.erase(str.begin() + i, str.begin() + j);
		cout << str << '\n';
	}

	return 0;
}