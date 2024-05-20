#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int MOD = 1000000007;

int main() {
	int N, M;
	cin >> N >> M;

	vector<vector<int>> dp(M + 1, vector<int>(27, 0));

	for (int i = 1; i <= 26; i++) {
		dp[1][i] = 1;
	}

	for (int i = 2; i <= M; i++) {
		for (int j = 1; j <= 26; j++) {
			for (int k = 1; k <= 26; k++) {
				if (abs(j - k) >= N) {
					dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
				}
			}
		}
	}

	int result = 0;
	for (int i = 1; i <= 26; i++) {
		result = (result + dp[M][i]) % MOD;
	}

	cout << result << '\n';

	return 0;
}
