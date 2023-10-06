#include<iostream>
#include<vector>
using namespace std;

int n;
char map[6][6];
bool visit[6][6];
vector<pair<int, int>> teacher, blank, student;
int dx[4] = { 1,-1,0,0 }, dy[4] = { 0,0,1,-1 };

void backtracking(int cnt, int idx) {
	if (cnt == 3) {
		for (int i = 0; i < teacher.size(); i++) {
			for (int j = 0; j < 4; j++) {
				int nx = teacher[i].first;
				int ny = teacher[i].second;
				while (nx >= 0 && nx < n && ny >= 0 && ny < n) {
					if (map[nx][ny] == 'O')
						break;
					else if (map[nx][ny] == 'S')
						return;
					nx += dx[j];
					ny += dy[j];
				}
			}
		}
		cout << "YES";
		exit(0);
	}

	for (int i = idx; i < blank.size(); i++) {
		map[blank[i].first][blank[i].second] = 'O';
		backtracking(cnt + 1, i + 1);
		map[blank[i].first][blank[i].second] = 'X';
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'T')
				teacher.push_back({ i,j });
			else if (map[i][j] == 'X')
				blank.push_back({ i,j });
			else
				student.push_back({ i,j });
		}
	}

	backtracking(0,0);
	cout << "NO";

	return 0;
}