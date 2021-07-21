#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	int n;
	cin >> n;
	vector<int>v;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int length[201];
	for (int k = 0; k < n; k++) {
		length[k] = 1;
		for (int i = 0; i < k; i++) {
			if (v[i] < v[k]) {
				length[k] = max(length[k], length[i] + 1);
			}
		}
	}

	int res = 0;
	for (int i = 0; i < n; i++) {
		res = max(res, length[i]);
	}
	cout << n- res;
	return 0;
}