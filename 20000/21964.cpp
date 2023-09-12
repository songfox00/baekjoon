#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n;
	string s;

	cin >> n >> s;
	cout << s.substr(s.size() - 5);

	return 0;
}