#include<iostream>
#include<string>

using namespace std;
string str;

bool check(int s, int e) {
	if (s >= e)
		return true;
	int l = s, r = e;
	while (l < r) {
		if (str[l] == str[r])
			return false;
		l++, r--;
	}
	return check(s, r-1);
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cin >> str;

		int len = str.length();
		if (check(0, len - 1))
			cout << "YES" << '\n';
		else cout << "NO\n";
	}
	return 0;
}
