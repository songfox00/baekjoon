#include<iostream>
#include<string>

using namespace std;

string a, b;

string isOK() {
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != b[i]) return "ERROR\n";
	}
	return "OK\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;

	cin >> t;
	while (t--) {
		cin >> a >> b;

		cout << isOK();
	}

	return 0;
}