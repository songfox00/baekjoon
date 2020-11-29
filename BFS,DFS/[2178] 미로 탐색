#include<iostream>
#include<queue>
#include<utility>
#include<string>
using namespace std;

int map[101][101];
queue<pair<int, int>>q;
int visit[101][101] = { 0, };
int n, m;
int dx[4] = { 1,-1,0,0 };	//동서남북
int dy[4] = { 0,0,-1,1 };

int bfs(int i, int j) {
	q.push(make_pair(i, j));
	visit[i][j] = 1;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		if (x == n && y == m)
			return visit[x][y];

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 1 && nx <=n && ny >= 1 && ny <=m) {
				if (map[nx][ny] == 1 && visit[nx][ny]==0) {
					visit[nx][ny] = visit[x][y] + 1;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
}

int main() {

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			scanf("%1d", &map[i][j]);
	}

	cout<<bfs(1,1);
	return 0;
}
