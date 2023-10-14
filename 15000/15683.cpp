#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, m;
int map[9][9];
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
int res = 1e9;
vector<pair<int, int>>cctv;

void check(int x, int y, int dir) {
	dir %= 4;

	while (1) {
		int nx = x + dx[dir];
		int ny = y + dy[dir];
		x = nx;
		y = ny;

		if (nx < 0 || nx >= n || ny < 0 || ny >= m)
			return;
		if (map[nx][ny] == 6)
			return;
		if (map[nx][ny] != 0)
			continue;
		map[nx][ny] = -1;
	}
}

void dfs(int idx) {
	if (idx == cctv.size()) {
		int cnt = 0;
		for (int i = 0; i < n; i++) 
			for (int j = 0; j < m; j++) 
				if (!map[i][j])
					cnt++;

		res = min(res, cnt);
		return;
	}

	int x = cctv[idx].first;
	int y = cctv[idx].second;
	int tmp[9][9];

	for (int dir = 0; dir < 4; dir++) {
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				tmp[i][j] = map[i][j];

		if (map[x][y] == 1)
			check(x, y, dir);
		else if (map[x][y] == 2) {
			check(x, y, dir);
			check(x, y, dir + 2);
		}
		else if (map[x][y] == 3) {
			check(x, y, dir);
			check(x, y, dir + 1);
		}
		else if (map[x][y] == 4) {
			check(x, y, dir);
			check(x, y, dir+1);
			check(x, y, dir+2);
		}
		else if (map[x][y] == 5) {
			check(x, y, dir);
			check(x, y, dir+1);
			check(x, y, dir+2);
			check(x, y, dir+3);
		}

		dfs(idx + 1);

		for (int i = 0; i < n; i++) 
			for (int j = 0; j < m; j++) 
				map[i][j] = tmp[i][j];
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];

			if (map[i][j] >= 1 && map[i][j] <= 5)
				cctv.push_back({ i,j });
		}
	}

	dfs(0);
	cout << res;

	return 0;
}