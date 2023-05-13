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

		int cnt = 0;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == 'D')
				break;
			cnt++;
		}

		cout << cnt << '\n';
	}

	return 0;
}