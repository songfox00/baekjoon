#include<iostream>
#include<string>

using namespace std;

int main() {
	string res = "MOBIS";
	string str;
	
	cin >> str;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < str.length(); j++) {
			if (res[i] == str[j]) 
				break;

			if (j == str.length() - 1) {
				cout << "NO";
				return 0;
			}
		}
	}

	cout << "YES";

	return 0;
}