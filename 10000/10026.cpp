#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

char map[101][101];
bool visit[101][101];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1, 0,0 };
int n;

void bfs(int a, int b) {
	queue<pair<int,int>>q;
	q.push({ a,b });
	visit[a][b] = true;

	while (q.empty()==0) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && ny >= 0 && nx < n && ny < n) {
				if (visit[nx][ny] == false) {
					if (map[nx][ny] == map[x][y]) {
						visit[nx][ny] = true;
						q.push({ nx, ny });
					}
				}
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	int cnt = 0, ncnt = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visit[i][j] == false) {
				bfs(i, j);
				cnt++;
			}
		}
	}
	memset(visit, false, sizeof(visit));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 'G')
				map[i][j] = 'R';
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visit[i][j] == false) {
				bfs(i, j);
				ncnt++;
			}
		}
	}

	cout << cnt << ' ' << ncnt << '\n';
}