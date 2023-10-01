#include<iostream>
#include<vector>
#include<queue>
#define INF 1e9 

using namespace std;

int n, m, x;
vector<pair<int, int>>graph[1001];
int d[1001];
int reverse_d[1001];

void dijkstra(int start) {
	fill_n(d, 1001, INF);
	priority_queue<pair<int, int>>pq;

	pq.push({ 0,start });
	d[start] = 0;

	while (!pq.empty()) {
		int dist = -pq.top().first;
		int now = pq.top().second;
		pq.pop();

		if (d[now] < dist)
			continue;

		for (int i = 0; i < graph[now].size(); i++) {
			int cost = dist + graph[now][i].second;

			if (cost < d[graph[now][i].first]) {
				d[graph[now][i].first] = cost;
				pq.push({ -cost,graph[now][i].first });
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> n >> m >> x;

	for (int i = 0; i < m; i++) {
		int a, b, t;
		cin >> a >> b >> t;
		graph[a].push_back({ b,t });
	}

	for (int i = 1; i <= n; i++) {
		dijkstra(i);

		reverse_d[i] = d[x];
	}

	dijkstra(x);

	int max = 0;
	for (int i = 1; i <= n; i++) {
		reverse_d[i] += d[i];
		if (reverse_d[i] > max)
			max = reverse_d[i];
	}

	cout << max;

	return 0;
}