#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<string>s;
	vector<string>v;

	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;

		s.push_back(a);
	}

	sort(s.begin(), s.end());

	int res = 0;
	string str;
	for (int i = 0; i < m; i++) {
		cin >> str;
		
		if (binary_search(s.begin(), s.end(), str))
			res++;
	}

	cout << res;
	return 0;
}