#include <iostream>
#define pi 3.14159265359

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int arr[3];
	bool odd = false;
	int ans = 1;

	for (int i = 0; i<3; i++) {
		cin >> arr[i];
		if (arr[i] % 2 != 0) {
			ans *= arr[i];
			odd = true;
		}
	}

	if (odd) {
		cout << ans;
	}
	else {
		cout << arr[0] * arr[1] * arr[2];
	}

	return 0;
}