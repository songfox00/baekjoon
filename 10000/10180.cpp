#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	double t, n, d, v, f, c;
	cin >> t;

	while (t--) {
		cin >> n >> d;

		int ans = 0;
		for (int i = 0; i < n; i++) {
			cin >> v >> f >> c;

			double dist = v * (f / c);
			if (dist >= d) 
				ans++;
		}
		cout << ans << '\n';
	}
	
	return 0;
}