#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string arr[1001];

bool cmp(string a, string b) {
	if (a == b)
		return false;
	string ab = a + b;
	string ba = b + a;
	if (ab > ba)
		return true;
	else
		return false;
}

int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL);

	int n;
	int zero = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == "0")
			zero++;
	}
	
	if (zero == n)
		cout << 0;
	else {
		sort(arr, arr + n, cmp);
		for (int i = 0; i < n; i++)
			cout << arr[i];
	}
	return 0;
}
