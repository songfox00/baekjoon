#include<iostream>
#define MOD 10007

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int dp[1001][10] = { 0, };
	int n;
	cin >> n;

	for (int i = 0; i <= 9; i++) {
		dp[1][i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= j; k++) {
				dp[i][j] += dp[i - 1][k];
				dp[i][j] %= MOD;
			}
		}
	}

	int res = 0;
	for (int i = 0; i <= 9; i++) {
		res += dp[n][i];
		res %= MOD;
	}

	cout << res;

	return 0;
}