#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	int cnt, depth=0;

	while (cin>>str>>cnt) {
		if (str == "Es")
			depth += cnt * 21;
		else
			depth += cnt * 17;
	}

	cout << depth;

	return 0;
}