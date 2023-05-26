#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t;
	cin >> t;
	string str;

	for (int i = 0; i<t; i++) {
		cin >> str;

		int len = str.length();

		int arr[26] = { 0 };
		int cnt = 0;

		for (int i = 0; i<len; i++) {
			cnt = str[i] - 65;  
			arr[cnt]++;         
		}

		int sum = 0;

		for (int i = 0; i<26; i++) {
			if (arr[i] == 0) {
				sum += i + 65;      
			}
		}
		cout << sum << "\n";
	}

	return 0;
}
