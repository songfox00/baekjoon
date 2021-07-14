#include<iostream>
#include<map>
#include<cstring>
#include<cmath>

using namespace std;

int MOD = 1e9 + 7;
long long dp[401][401][201];
int sx, sy, hx, hy, t, n;
map<pair<int, int>, bool>block;
int dx[] = { 1,-1,0,0 }, dy[] = { 0,0,-1,1 };

long long dfs(int x, int y, int time) {
	int cx = sx + x, cy = sy + y;	//현재 좌표
	if (cx == hx && cy == hy)	//집에 도달하면
		return 1;
	if (abs(hx - cx) + abs(hy - cy) > t - time || t==time)	//남은 거리가 남은 시간보다 클때 || 시간이 끝났을 때
		return 0;

	if (dp[x + 200][y + 200][time] != -1)
		return dp[x + 200][y + 200][time];
	dp[x + 200][y + 200][time] = 0;	//방문하지 않은 좌표이므로 0으로 초기화

	for (int i = 0; i < 4; i++) {	//4방향 이동
		int nx = x + dx[i], ny = y + dy[i];	//이동한 거리+이동할 거리(다음 좌표)
		cx = sx + nx, cy = sy + ny;	//다음 좌표
		if (!block[{cx, cy}])	//장애물이 없다면
			dp[x + 200][y + 200][time] = (dp[x + 200][y + 200][time] + dfs(nx, ny, time + 1) % MOD) % MOD;
	}
	return dp[x + 200][y + 200][time];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	memset(dp, -1, sizeof(dp));
	cin >> sx >> sy>>t>>hx>>hy>>n;
	sx += 100000;
	sy += 100000;
	hx += 100000;
	hy += 100000;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		a += 100000;
		b += 100000;
		block[{a, b}] = true;
	}

	cout<<dfs(0, 0, 0)%MOD;

	return 0;
}