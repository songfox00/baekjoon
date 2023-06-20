#include<iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int test;
	cin >> test;

	string str;

	vector<string> v;

	for (int i = 0; i<test; i++) {
		cin >> str;
		v.push_back(str);
	}

	int k;
	cin >> k;

	if (k == 1) {
		for (int i = 0; i<test; i++) {
			cout << v[i] << "\n";
		}
	}

	else if (k == 2) {
		for (int i = 0; i<test; i++) {
			reverse(v[i].begin(), v[i].end());  
			cout << v[i] << "\n";
		}
	}

	else {
		for (int i = test - 1; i >= 0; i--) {
			cout << v[i] << "\n";
		}
	}

	return 0;
}