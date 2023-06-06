#include <iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	string str;
	int a=0, b=0;

	cin >> n;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'A')
			a++;
		else 
			b++;
	}
	if (a > b) 
		cout << "A";
	else if (b > a) 
		cout << "B";
	else 
		cout << "Tie";

	return 0;
}
