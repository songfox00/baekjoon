#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;
	string arr[1001];

	for (int i = 0; i < str.length(); i++) {
		arr[i] = str.substr(i, str.length());
	}

	sort(arr, arr + str.length());

	for (int i = 0; i < str.length(); i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}