#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, a, sum=0;
	vector <int> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;

		v.push_back(a);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size() - 1; i++) 
		sum += v[i];
	cout << sum;

	return 0;
}