#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	vector<pair<int, int>>v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}

	int min = 100000000;
	int nidx = 0;

	for (int i = 0; i < n; i++) {
		int max = -1;
		int xidx = i;	
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			int len = sqrt(pow(v[i].first - v[j].first, 2) + pow(v[i].second - v[j].second, 2));
			if (max < len) {	
				max = len;
				xidx = i;
			}
		}
		if (min > max) {	
			min = max;
			nidx = xidx;
		}
	}
	cout << v[nidx].first << ' ' << v[nidx].second;
}