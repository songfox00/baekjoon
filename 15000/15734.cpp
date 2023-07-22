#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int l, r, a;
	cin >> l >> r >> a;

	cout << min({ l + a, r + a, (l + r + a) / 2 }) * 2;

	return 0;
}