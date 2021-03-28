#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		double n, m;
		cin >> n >> m;
		int cnt = 0;
		for (int i = 1; i < n - 1; i++) {
			for(int j=i+1;j<n;j++){
				double res = (i*i + j*j + m) / (i*j);
				if (res - (int)res == 0)
					cnt++;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}