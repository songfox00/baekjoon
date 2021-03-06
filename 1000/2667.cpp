#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int map[26][26];
bool visit[26][26];
int n, cnt;
int dx[4] = { 1,-1,0,0 };	//동서남북
int dy[4] = { 0,0,-1,1 };
vector<int>house;

int dfs(int i, int j) {
	visit[i][j] = true;
	cnt++;

	for (int k = 0; k < 4; k++) {
		int nx = i + dx[k];
		int ny = j + dy[k];
		if (nx >= 1 && nx <= n&&ny >= 1 && ny <= n) {
			if (visit[nx][ny] == false && map[nx][ny] == 1) {
				dfs(nx, ny);
			}
		}
	}
	return 0;
}

int main() {
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			scanf("%1d", &map[i][j]);
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (map[i][j] == 1 && visit[i][j] == false) {
				cnt = 0;
				dfs(i, j);
				house.push_back(cnt);
			}
		}
	}
	sort(house.begin(), house.end());

	cout << house.size() << '\n';
	for (int i = 0; i < house.size(); i++)
		cout << house[i] << '\n';

	return 0;
}
