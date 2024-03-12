#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int N, t1 = 0, t2, cnt = 0;
	cin >> N;

	for (int n = 0; n < N; ++n) {
		cin >> t2;
		if (t1 <= t2)
			++cnt;
		t1 = t2;
	}
	cout << cnt;

	return 0;
}