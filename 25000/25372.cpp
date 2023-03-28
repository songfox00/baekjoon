#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	while (n--) {
		string str;
		cin >> str;

		if (str.length() >= 6 && str.length() <= 9)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}

	return 0;
}