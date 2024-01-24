#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;

	int cnt[128] = { 0, };

	for (int i = 0; i < str.length(); i++) {
		cnt[str[i]]++;
	}

	cout << cnt['B'] / 2 + cnt['C'] / 2;


	return 0;
}