#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	string str;
	vector<int> v;

	for (int i = 0; i < 5; i++) {
		cin >> str;

		if (str.find("FBI") != string::npos)
			v.push_back(i + 1);
	}

	if (v.size()) {
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << ' ';
	}
	else
		cout << "HE GOT AWAY!";

	return 0;
}
