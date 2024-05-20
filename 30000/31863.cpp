#include <iostream>
#include <queue>

using namespace std;

int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };
int N, M;
int collapsed_buildings = 0;
int standing_buildings = 0;
char map[1001][1001];
int visit[1001][1001] = { 0, };

void bfs(int sx, int sy) {
	queue<pair<int, int>>q;

	for (int i = 0; i < 4; i++) {
		int cx = sx, cy = sy;
		for (int j = 0; j < 2; j++) {
			cx += dx[i], cy += dy[i];

			if (cx < 0 || cx >= N || cy < 0 || cy >= M || map[cx][cy] == '|')
				break;

			visit[cx][cy]++;
			if (map[cx][cy] == '*' && visit[cx][cy] == 1) {
				collapsed_buildings++;
				q.push({ cx,cy });
			}
		}
	}

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			// 지진 방파제를 만나거나 범위를 벗어나면 더 이상 진행하지 않음
			if (nx < 0 || nx >= N || ny < 0 || ny >= M || map[nx][ny] == '|') {
				continue;
			}

			visit[nx][ny]++;
			// 진동을 받은 건물인 경우
			if ((map[nx][ny] == '*' && visit[nx][ny] == 1) || (map[nx][ny] == '#' && visit[nx][ny] == 2)) {

				collapsed_buildings++;
				q.push({ nx,ny });
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> N >> M;

	int startx, starty;

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> map[i][j];
			if (map[i][j] == '@') {
				startx = i;
				starty = j;
			}
		}
	}

	bfs(startx, starty);

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if ((map[i][j] == '*' && visit[i][j] == 0) || (map[i][j] == '#' && visit[i][j] < 2))
				standing_buildings++;
		}
	}

	cout << collapsed_buildings << " " << standing_buildings << '\n';

	return 0;
}