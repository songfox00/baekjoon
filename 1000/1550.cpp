#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	string s;
	int n=0;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		n *= 16;
		if (s[i] >= 'A'&&s[i] <= 'F') {
			n += s[i] - 'A' + 10;
		}
		else
			n += s[i] - '0';
	}
	cout << n;
	return 0;
}