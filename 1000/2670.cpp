#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	double dp[10001];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin>>dp[i];
	}

	double res = dp[1];

	for (int i = 1; i < n; i++) {
		if (dp[i] * dp[i - 1] >= dp[i])
			dp[i] = dp[i - 1] * dp[i];
		res = max(res, dp[i]);
	}

	printf("%.3lf", res);
}