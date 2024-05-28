#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

int t, h;
string str;

vector <string> split(string input, char delimiter) {
	vector <string> result;
	stringstream ss(input);
	string tmp;

	while (getline(ss, tmp, delimiter)) 
		result.push_back(tmp);

	return result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	cin >> t;
	cin.ignore();

	for (int i = 1; i <= t; i++) {
		getline(cin, str);

		vector <string> v = split(str, ' ');
		vector <int> ans;

		h = stoi(v[0]);
		for (int i = 1; i <= h; i++) {
			int num = stoi(v[i]) * (h - i + 1);
			ans.push_back(num);
		}
		cout << "Case " << i << ": " << h - 1 << ' ';
		for (auto e : ans) cout << e << ' ';
		cout << '\n';
	}

	return 0;
}