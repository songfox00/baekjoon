#include<iostream>
#include<queue>

using namespace std;

int n, m, map[501][501], visit[501][501] = { false };
int dx[4] = { 1,-1,0,0 }, dy[4] = { 0,0,1,-1 };
int cnt = 0;
int maxWidth = 0;
int width = 0;

void bfs(int x, int y) {
	queue<pair<int, int>>q;
	q.push({ x, y });
	visit[x][y] = true;

	while (!q.empty()) {
		int cx = q.front().first;
		int cy = q.front().second;
		
		q.pop();
		width++;

		for (int i = 0; i < 4; i++) {
			int nx = cx + dx[i];
			int ny = cy + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visit[nx][ny] && map[nx][ny] == 1) {
				visit[nx][ny] = true;
				q.push({ nx,ny });
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j]==1 && !visit[i][j]) {
				width = 0;
				cnt++;

				bfs(i, j);
				maxWidth = max(maxWidth, width);
			}
		}
	}

	cout << cnt << '\n' << maxWidth;
	return 0;
}