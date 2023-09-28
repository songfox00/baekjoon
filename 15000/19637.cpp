#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<pair<int, string>>v;
	string str;
	int x;

	for (int i = 0; i < n; i++) {
		cin >> str >> x;
		v.push_back({ x, str });
	}

	for (int i = 0; i < m; i++) {
		cin >> x;

		int left = 0, right = n - 1, mid= (left + right) / 2;
		while (left <= right) {
			mid = (left + right) / 2;
			if (x <= v[mid].first) {
				right = mid - 1;
			}
			else
				left = mid + 1;
		}
		if (x > v[mid].first)
			cout << v[mid + 1].second << '\n';  //endl 쓰면 시간초과
		else
			cout << v[mid].second << '\n';
	}

	return 0;

}