#include<iostream>
#include<algorithm>

using namespace std;

int a[20001], b[20001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		for (int i = 0; i < n; i++) 
			cin >> a[i];
		
		for (int i = 0; i < m; i++) 
			cin >> b[i];
		

		sort(a, a + n);
		sort(b, b + m);

		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == 1 || a[i]<=b[0])
				continue;

			int left = 0, right = m - 1;
			
			while (left <= right) {
				int mid = (left + right) / 2;

				if (a[i] <= b[mid])
					right = mid - 1;
				else
					left = mid + 1;
			}
			cnt += left;
		}

		cout << cnt << '\n';
	}

	return 0;
}