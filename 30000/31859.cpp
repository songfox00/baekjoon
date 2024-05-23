#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n, cnt=0;
	string s, name="";
	vector<char>v;
	char alphabet[26] = { 0, };

	cin >> n >> s;

	for (int i = 0; i < s.length(); i++) {
		if (alphabet[s[i] - 'a']) {
			cnt++;
		}
		else {
			alphabet[s[i] - 'a'] = 1;
			name += s[i];
		}
	}

	name += to_string(cnt + 4);
	name = to_string(1906 + n) + name;

	cout << "smupc_";
	for (int i = name.length() - 1; i >= 0; i--) {
		cout << name[i];
	}

	return 0;
}
