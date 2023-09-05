#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, k; 
	cin >> n >> k;

	int modK = k % 10, mod2K = (2 * k) % 10;

	vector<int> res;

	for (int i = 1; i <= n; i++) {
		if (i % 10 != modK && i % 10 != mod2K)
			res.push_back(i);
	}

	cout << res.size() << "\n";
	for (const auto& num : res)
		cout << num << " ";


	return 0;
}