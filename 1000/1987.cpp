#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int res = 1;
bool visit[27] = { false };
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
char map[21][21];
int r, c;

void dfs(int x, int y, int cnt) {
	res = max(res, cnt);

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx<r && ny >= 0 && ny<c && !visit[map[nx][ny] - 'A']) {
			visit[map[nx][ny] - 'A'] = true;
			dfs(nx, ny, cnt + 1);
			visit[map[nx][ny] - 'A'] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> map[i][j];
		}
	}

	visit[map[0][0] - 'A'] = true;
	dfs(0, 0, 1);

	cout << res;
}