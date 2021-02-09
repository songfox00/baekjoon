#include<iostream>
#include<queue>
#include<utility>

using namespace std;

int map[101][101];
bool visit[101][101] = { false };
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1, 0,0 };

void bfs(int a, int b) {
	queue<pair<int,int>>q;
	q.push({ a,b });
	visit[a][b] = true;
	while (q.size()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
}