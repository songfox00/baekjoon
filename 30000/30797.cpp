#include<iostream>

using namespace std;

int main() {
	int t, n, f;

	cin >> t >> n;

	for (int i = 0; i < n; i++) {
		cin >> f;

		t -= f;
	}

	if (t <= 0)
		cout << "Padaeng_i Happy";
	else
		cout << "Padaeng_i Cry";

	return 0;
}