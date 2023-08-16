#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, a, max=0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;

		if (max < a)
			max = a;
	}

	cout << max;

	return 0;
}