#include<iostream>

using namespace std;

int dx[4] = { -1,0,1,0 }, dy[4] = { 0,1,0,-1 };
int n, m, r, c, d;
int map[51][51];
bool visit[51][51] = { false, };

void dfs(int x, int y, int d, int sum) {
	for (int i = 0; i < 4; i++) {
		int nd = (d + 3 - i) % 4;
		int nx = x + dx[nd];
		int ny = y + dy[nd];

		if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visit[nx][ny] && map[nx][ny] == 0) {
			visit[nx][ny] = true;
			dfs(nx, ny, nd, sum + 1);
		}
	}

	int backd = (d + 2) % 4;
	int backx = x + dx[backd];
	int backy = y + dy[backd];
	if (backx >= 0 && backx <= n && backy >= 0 && backy <= m) {
		if (map[backx][backy] == 0) {
			dfs(backx, backy, d, sum);
		}
		else {
			cout << sum;
			exit(0);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >> n >> m;
	cin >> r >> c >> d;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	visit[r][c] = true;
	dfs(r, c, d, 1);

	return 0;
}