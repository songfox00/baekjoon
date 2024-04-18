#include<iostream>
#include<string>

using namespace std;

string shortFrom[12] = { "CU", ":-)", ":-(", ";-)", ":-P", "(~.~)", "TA", "CCC", "CUZ", "TY", "YW", "TTYL" };
string translation[12] = { "see you", "I’m happy", "I’m unhappy", "wink",
"stick out my tongue", "sleepy", "totally awesome",
"Canadian Computing Competition", "because", "thank-you",
"you’re welcome", "talk to you later" };

string translate(string str) {
	for (int i = 0; i < 12; i++) {
		if (str == shortFrom[i])
			return translation[i];
	}
	return str;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while (true) {
		string input; 
		cin >> input;

		cout << translate(input) << "\n";
		if (input == "TTYL") 
			break;
	}

	return 0;
}