#include<iostream>
#include<vector>
#include<queue>

using namespace std;

char map[101][101];
bool visited[101][101];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int r, c;

void bfs(int x, int y) {
	queue<pair<int, int>>q;
	q.push({ x,y });
	visited[x][y] = true;

	while (!q.empty()) {
		int cx = q.front().first;
		int cy = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = cx + dx[i];
			int ny = cy + dy[i];

			if (nx >= 0 && nx < r && ny >= 0 && ny < c && !visited[nx][ny] && map[nx][ny]=='#') {
				q.push({ nx,ny });
				visited[nx][ny] = true;
			}
		}
	}
}

int main() {
	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> map[i][j];
		}
	}

	int res = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (!visited[i][j] && map[i][j]=='#') {
				bfs(i, j);
				res++;
			}
		}
	}

	cout << res;

	return 0;
}