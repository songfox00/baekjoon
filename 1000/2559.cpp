#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n, k, a;
	cin >> n >> k;

	int dp[100001];
	dp[0] = 0;

	for (int i = 1; i <= n; i++) {
		cin >> a;
		dp[i] = dp[i - 1] + a;
	}

	int res = -10000001;
	
	for (int j = k; j <= n; j++) {
		res = max(res, dp[j] - dp[j - k]);
	}
	
	cout << res;

	return 0;
}