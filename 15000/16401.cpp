#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int>v;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	int m, n, a;
	cin >> m >> n;

	int left = 1, right=0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
		if (right < a)
			right = a;
	}
	
	int result = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			cnt += v[i] / mid;
		}
		if (cnt >= m) {
			result = mid;
			left = mid + 1;
		}
		else
			right = mid-1;
	}
	cout << result;
}