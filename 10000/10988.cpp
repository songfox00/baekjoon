#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	string s;
	cin >> s;
	
	for (int i = 0, j=s.length()-1; i < s.length() / 2; i++,j--) {
		if (s[i] != s[j]) {
			cout << 0;
			return 0;
		}
	}

	cout << 1;
	return 0;
}