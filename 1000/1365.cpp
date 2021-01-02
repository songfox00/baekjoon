#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int>v;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		int pos = lower_bound(v.begin(), v.end(), a) - v.begin();
		if (pos == v.size())
			v.push_back(a);
		else if (v[pos] > a)
			v[pos] = a;
	}
	cout << n - v.size();

}
