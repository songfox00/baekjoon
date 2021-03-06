#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<long long>v;

	int n;
	cin >> n;

	v.push_back(1001);
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		if (a < v[v.size() - 1])
			v.push_back(a);
		else {
			int left = 0;
			int right = v.size() - 1;

			while (left < right) {
				int mid = (left + right) / 2;
				if (v[mid] > a)
					left = mid+1;
				else
					right=mid;
			}
			v[right] = a;
		}
	}
	cout << v.size() - 1;
}
