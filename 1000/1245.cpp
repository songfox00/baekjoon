#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, m, res=0, flag=0;
int map[101][71], dx[8] = { 1,-1,0,0, 1,1,-1,-1 }, dy[8] = { 0,0,1,-1, 1,-1,1,-1 };
bool visited[101][71];

void dfs(int x, int y) {
	visited[x][y] = true;
	int cur = map[x][y];

	for (int i = 0; i < 8; i++) {
		int sx = x + dx[i];
		int sy = y + dy[i];

		if (sx >= 0 && sx < n && sy >= 0 && sy < m) {
			if (map[sx][sy] > cur) {
				flag = 1;
			}
			else if(map[sx][sy] == cur){
				if (!visited[sx][sy]) {
					dfs(sx, sy);
				}
			}
		}

	}

	return;
}

int main() {
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!visited[i][j]) {
				flag = 0;
				dfs(i, j);

				if (flag == 0) {
					res++;
				}
			}
		}
	}

	cout << res;

	return 0;
}