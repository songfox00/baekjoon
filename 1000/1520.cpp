#include <iostream>

using namespace std;

int n, m;
int map[501][501];
int dp[501][501];
bool visit[501][501];
int dx[4] = { 1,-1,0,0 }, dy[4] = {0,0,1,-1};

int dfs(int x, int y) {
	if (x == n - 1 && y == m - 1)
		return 1;
	if (visit[x][y]==true)
		return dp[x][y];

	visit[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
			if (map[nx][ny] < map[x][y])
				dp[x][y] = dp[x][y] + dfs(nx, ny);
		}
	}
	return dp[x][y];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			dp[i][j] = 0;
		}
	}

	cout << dfs(0, 0);

	return 0;

}