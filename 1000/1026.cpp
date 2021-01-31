#include <iostream>
#include<algorithm>

using namespace std;

bool com(int a, int b) {
	if (a < b)
		return a > b;
	return a > b;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a[51];
	int b[51];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + n, com);

	int res = 0;
	for (int i = 0; i < n; i++) {
		res += a[i] * b[i];
	}

	cout << res;
}


