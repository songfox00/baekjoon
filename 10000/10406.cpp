#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int w, n, p;
	cin >> w >> n >> p;

	int cnt = 0;
	for (int i = 0; i < p; i++) {
		int p; 
		cin >> p;

		if (p >= w && p <= n)
			cnt++;
	}

	cout << cnt << "\n";

	return 0;
}