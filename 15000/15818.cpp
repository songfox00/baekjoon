#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	long long n, m, ans = 1;
	vector<long long>nums;

	cin >> n >> m;
	nums.resize(n);

	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	for (auto num : nums) {
		ans *= (num % m);
		ans %= m;
	}

	cout << ans;

	return 0;
}