#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int>v;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a, cur_max = 0, res=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	a = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] >= cur_max) {
			cur_max = v[i];
			res = max(res, a);
			a = 0;
		}
		else a++;
	}
	res = max(res, a);
	cout << res;
}
