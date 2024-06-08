#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	double l, wi, d, we, t;
	int tot=0;
	cin >> t;

	while (t--) {
		cin >> l >> wi >> d >> we;
		if (((l <= 56.0 && wi <= 45.0 && d <= 25.0) || l + wi + d <= 125.0)&& we <= 7.0) {
			cout << 1 << '\n';
			tot++;
		}
		else 
			cout << 0 << '\n';
	}
	cout << tot << '\n';

	return 0;
}