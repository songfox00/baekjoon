#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t, m, k, d, a;
	cin >> t;

	while (t--) {
		long long ans = 0, temp = 0;
		long long arr[101][3];

		cin >> m;
		
		for (int i = 0; i < m; i++) {
			cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
		}
		cin >> k >> d >> a;

		for (int i = 0; i < m; i++) {
			temp += (arr[i][0] * k - arr[i][1] * d + arr[i][2] * a);
			if (temp < 0)
				temp = 0;

			ans += temp;
			temp = 0;
		}

		cout << ans << endl;
	}
	
	return 0;
}