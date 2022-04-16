#include<iostream>

using namespace std;

int n;
double E, W, S, N;
bool visit[30][30] = { false, };
int dx[4] = { 1,-1,0,0 }, dy[4] = { 0,0,-1,1 };
double res;
double result=0;

void dfs(int x, int y, double ans, int move) {
	if (move == n) {
		result += ans;
		return;
	}

	visit[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx == x+1 && ny == y+0)
			res = E/100.0;
		else if (nx == x-1 && ny == y+0)
			res = W/100.0;
		else if (nx == x+0 && ny == y+1)
			res = S/100.0;
		else if(nx==x+0 && ny==y-1)
			res = N/100.0;

		if (!visit[nx][ny]) {
			dfs(nx, ny, ans*res, move+1);
			visit[nx][ny] = false;
		}
	}
	
}

int main() {
	cin >> n >> E >> W >> S >> N;

	dfs(15, 15, 1, 0);

	cout.precision(10);
	cout << fixed<<result;
	return 0;
}
