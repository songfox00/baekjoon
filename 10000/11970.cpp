#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int ans = 0, fence[101] = { 0, }, a[4];

	cin >> a[0] >> a[1] >> a[2] >> a[3];
	for (int i = a[0]; i < a[1]; i++) 
		fence[i]++;
	for (int i = a[2]; i < a[3]; i++) 
		fence[i]++;
	for (int i = 0; i <= 100; i++) {
		if (fence[i]) ans++;
	}
	cout << ans;

	return 0;
}