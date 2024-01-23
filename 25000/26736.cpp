#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;

	int cntA = 0, cntB = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'A')
			cntA++;
		else
			cntB++;
	}

	cout << cntA << " : " << cntB;

	return 0;
}