#include<iostream>
#include<queue>

using namespace std;

int map[101][101];
int n, m;
bool visit[101][101] = { false, };
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int time = 0, cheese = 0;

bool bfs() {
	queue<pair<int, int>> q;
	q.push({ 0,0 });
	visit[0][0] = true;
	time++;
	int cnt = 0;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if (visit[nx][ny]) continue;

			if (map[nx][ny] == 0) {
				q.push({ nx,ny });
			}
			else {
				map[nx][ny] = 0;
				cnt++;
			}

			visit[nx][ny] = true;
		}
	}
	if (cnt == 0) {
		cout << --time << '\n' << cheese;
		return true;
	}
	else {
		cheese = cnt;
		return false;
	}


}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	while (true) {
		if (bfs())
			break;
		for (int i = 0; i < n; i++) {
			fill(visit[i], visit[i] + m, false);
		}
	}

	return 0;
}