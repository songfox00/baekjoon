#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define MAX 801
#define INF 1e9

using namespace std;

int dis[MAX];
vector<pair<int, int>>adj[MAX];

void dijkstra(int s) {
	fill(dis, dis + MAX, INF);
	priority_queue<pair<int, int>>pq;
	dis[s] = 0;
	pq.push({ 0,s });
	while (!pq.empty()) {
		int d = -pq.top().first;	// 시작지점부터의 거리
		int u = pq.top().second;	//현재 정점
		pq.pop();
		if (d > dis[u])
			continue;
		for (int i = 0; i < adj[u].size(); i++) {
			int v = adj[u][i].first;	//다음 정점
			int c = adj[u][i].second;	//가중치
			if (dis[v] > dis[u] + c) {	//다음 정점이 현재 정점까지+가중치보다 크면
				dis[v] = dis[u] + c;
				pq.push({ -dis[v], v });
			}
		}
	}
}

int main() {
	int n, e;
	cin >> n >> e;

	for (int i = 0; i < e; i++) {
		int a, b, c;
		cin >> a >> b >> c;

		adj[a].push_back({ b,c });
		adj[b].push_back({ a,c });
	}
	
	int v1, v2;
	cin >> v1 >> v2;

	long long ans1=0, ans2=0;
	dijkstra(1);
	ans1 += dis[v1];
	ans2 += dis[v2];
	dijkstra(v1);
	ans1 += dis[v2];
	ans2 += dis[v2] + dis[n];
	dijkstra(v2);
	ans1 += dis[n];

	if (ans1 >= INF && ans2 >= INF)
		cout << -1;
	else
		cout << min(ans1, ans2);
	return 0;
}