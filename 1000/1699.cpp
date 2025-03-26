#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, dp[100001];
	cin >> n;

	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		dp[i] = i;
		for (int j = 1; j*j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j*j] + 1);	//+1은 가장 큰 제곱수, 나머지는 이전의 dp값
		}
	}

	cout << dp[n];

	return 0;
}