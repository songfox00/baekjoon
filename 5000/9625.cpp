#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int dp[46][2] = { 0, };
	int k;
	cin >> k;

	dp[0][0] = 1;
	dp[0][1] = 0;

	for (int i = 1; i <= k; i++) {
		dp[i][0] = dp[i-1][1];
		dp[i][1] = dp[i-1][1] + dp[i - 1][0];
	}

	cout << dp[k][0] << ' ' << dp[k][1];

	return 0;
}