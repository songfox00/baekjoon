#include<iostream>

using namespace std;

int main() {
	int n, arr[1001], ans=0, b;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b;
		if (arr[i] <= b)
			ans++;
	}

	cout << ans;

	return 0;
}