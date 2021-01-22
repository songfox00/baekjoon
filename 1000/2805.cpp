#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m;
vector<int>v;

int main() {
	cin >> n >> m;

	int a;
	int left = 0, right=0, mid;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
		right = max(v[i], right);
	}
	
	long long sum;
	int res = -1;
	while (right >= left) {
		mid = (right + left) / 2;
		sum = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] - mid > 0)
				sum += v[i] - mid;
		}
		if (sum < m)
			right = mid - 1;
		else {
			res = max(res, mid);
			left = mid + 1;
		}
	}
	cout << res;

}