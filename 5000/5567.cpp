#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n, m;
vector<int>v[501];
bool visit[501] = { false, };
int cnt = 0;
int res[501] = { 0, };

void bfs(int start) {
	queue<int>q;
	q.push(start);
	visit[start] = true;
	int depth = 0;
	res[start] = depth;
	
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < v[x].size(); i++) {
			depth = res[x];
			int nxt = v[x][i];
			if (!visit[nxt]) {
				depth++;
				q.push(nxt);
				visit[nxt] = true;
				res[nxt] = depth;
			}
		}
	}
}

int main() {
	
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	bfs(1);

	int cnt = 0;
	for (int i = 2; i <= n; i++) {
		if (res[i]!=0 && res[i] <= 2) {
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}