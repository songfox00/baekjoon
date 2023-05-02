#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	getline(cin, str);
	
	vector<char>v;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '<') {
			for (int j = v.size() - 1; j >= 0; j--) {
				cout << v[j];
			}
			v.clear();

			while (1) {
				cout << str[i];
				if (str[i] == '>')
					break;
				i++;
			}
		}
		else if (str[i] == ' ') {
			for (int j = v.size() - 1; j >= 0; j--) {
				cout << v[j];
			}
			v.clear();
			cout << ' ';
		}
		else {
			v.push_back(str[i]);
		}
		
	}

	for (int j = v.size() - 1; j >= 0; j--) {
		cout << v[j];
	}

	return 0;
}