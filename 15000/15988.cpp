#include<iostream>

using namespace std;

long long MOD=1000000009, dp[1000010],n,t;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	
	dp[1] = 1, dp[2] = 2, dp[3] = 4;

	for (int i = 4; i <= 1000000; i++) {
		dp[i] += dp[i - 1] + dp[i - 2] + dp[i - 3];
		dp[i] %= MOD;
	}

	cin >> t;

	while (t--) {
		cin >> n;
		cout << dp[n] << '\n';
	}
}