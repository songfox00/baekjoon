#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, d;
	cin >> n >> d;

	int cnt, total=0;
	int arr[31];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		total += arr[i];
	}

	int money = d / total;

	for (int i = 0; i < n; i++) {
		cout << money*arr[i] << '\n';
	}

	return 0;
}