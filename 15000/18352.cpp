#include<iostream>
#include<vector>
#include<queue>
#define INF 1e9

using namespace std;

int n, m, k, x;
vector<int>graph[300001];
int d[300001];
bool visit[300001] = { false, };

void bfs(int start) {
	queue<int>q;

	q.push(start);
	d[start] = 0;

	while (!q.empty()) {
		int node = q.front();
		q.pop();

		for (int i = 0; i < graph[node].size(); i++) {
			int next = graph[node][i];
			if (d[next] > d[node] + 1) {
				d[next] = d[node] + 1;
				q.push(next);
			}
			
		}
	}
}

int main() {
	cin >> n >> m >> k >> x;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;

		graph[a].push_back(b);
	}

	fill_n(d, n+1, INF);
	bfs(x);

	int cnt = 0;

	for (int i = 1; i <= n; i++) {
		if (d[i] == k) {
			cout << i << '\n';
			cnt++;
		}
	}

	if (cnt == 0)
		cout << -1;

	return 0;
}