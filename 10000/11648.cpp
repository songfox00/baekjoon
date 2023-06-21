#include <iostream>
#include <string>

using namespace std;

string s;
int stage;

int getNum(string str) {
	int num = 1;
	if (str == "0") return 0;
	for (auto s : str) num *= s - '0';
	return num;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	cin >> s;

	while (1) {
		if (s.size() == 1) break;
		stage++;
		int num = getNum(s);
		s = to_string(num);
	}

	cout << stage;

	return 0;
}