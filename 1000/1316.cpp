#include<iostream>
#include<string>

using namespace std;

int main() {
	int list[26] = { 0, };
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 26; j++) {
			list[j] = 0;
		}
		string str;
		cin >> str;
		int flag = 0;
		for (int j = 1; j < str.size(); j++) {
			if (str[j - 1] != str[j]) {
				list[str[j - 1] - 'a'] = 1;
				if ((list[str[j]-'a']) == 1) {
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0)
			cnt++;
	}
	cout << cnt;
	return 0;
}
