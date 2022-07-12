#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int dp[100001];
	int num[100001];
	int res;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	res = num[0];
	dp[0] = num[0];
	for (int i = 1; i < n; i++) {
		dp[i] = num[i];
		if (dp[i] < dp[i - 1] + num[i])
			dp[i] = dp[i - 1] + num[i];
		if (dp[i] > res)
			res = dp[i];
	}

	cout << res;

	return 0;
}
