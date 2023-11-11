#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str; 
	cin >> str;

	string ans = "";
	int idx = 0;
	while (true) {
		if ((size_t)idx == str.size() - 1) 
			break;

		ans += str[idx];
		idx += str[idx] - 'A' + 1;
	}

	ans += str[str.size() - 1];
	cout << ans << "\n";

	return 0;
}