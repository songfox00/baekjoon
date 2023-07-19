#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, arr[40000] = { 0, };
	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		int temp;
		cin >> temp;
		arr[temp]++;
	}

	for (int i = 1; i <= n; i++) {
		if (arr[i] == 0) {
			cout << i;
			return 0;
		}
	}

	return 0;
}