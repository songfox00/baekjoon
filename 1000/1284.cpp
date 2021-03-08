#include <iostream>
#include<string>

using namespace std;

int main() {
	
	while (true) {
		string s;
		cin >> s;

		if (s == "0")
			break;
		
		int cnt = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '1') {
				cnt += 2;
			}
			else if (s[i] == '0') {
				cnt += 4;
			}
			else {
				cnt += 3;
			}
			cnt++;
		}
		cnt ++;
		cout << cnt<<'\n';
	}

	return 0;
}
