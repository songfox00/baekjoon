#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;

	char pos=str[0];
	int zero = 0, one = 0;

	for (int i = 1; i < str.length(); i++) {
		if (i == str.length() - 1) {
			if (str[i] == '1')
				one++;
			else
				zero++;
		}

		if (str[i] == pos)
			continue;
		else {
			pos = str[i];
			if (str[i - 1] == '1') 
				one++;
			else
				zero++;
		}
	}

	if (zero >= one)
		cout << one;
	else
		cout << zero;

	return 0;
}