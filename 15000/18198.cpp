#include<iostream>
#include<string>

using namespace std;
//Basketball One-on-One
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;

	int scoreA = 0, scoreB = 0;

	for (int i = 0; i < str.length(); i += 2) {
		if (str[i] == 'A') 
			scoreA += str[i+1]-'0';
		else 
			scoreB += str[i + 1] - '0';
	}

	if (scoreA > scoreB)
		cout << "A";
	else
		cout << "B";

	return 0;
}