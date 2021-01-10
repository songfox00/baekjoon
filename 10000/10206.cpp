#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int>v;
vector<int>v2;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m, a;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a % 10 == 0)
			v.push_back(a);
		else
			v2.push_back(a);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v2.size(); i++) {
		v.push_back(v2[i]);
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		while (m>0 && v[i] > 10) {
			v[i] -= 10;
			cnt++;
			m--;
		}
		if (v[i] == 10) {
			cnt++;
		}
	}
	cout << cnt;
}
