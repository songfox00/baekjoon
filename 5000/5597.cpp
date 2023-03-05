#include<iostream>
#include<vector>

using namespace std;

int main() {
	int arr[31] = { 0, };
	int n;
	vector<int>v;

	for (int i = 0; i < 28; i++) {
		cin >> n;
		arr[n] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (arr[i] == 0)
			v.push_back(i);
	}

	if (v[0] > v[1])
		cout << v[1]<<'\n'<<v[0];
	else
		cout << v[0] << '\n' << v[1];
	return 0;
}