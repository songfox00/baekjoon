#include<iostream>
#include<vector>
#include<queue>
#define INF 1e9

using namespace std;

int n, D;
int start = 0, end = D;
vector<pair<int, int>>v[10001];
int d[10001];

void dijkstra(int start) {
	priority_queue<pair<int,int>>pq;
	d[start] = 0;
	pq.push({ 0, start });

	while (!pq.empty()) {
		int dist = -pq.top().first;
		int now = pq.top().second;
		pq.pop();

		for (int i = 0; i < v[now].size(); i++) {
			int nxt = v[now][i].first;
			int cost = dist + v[now][i].second;

			if (nxt > D)
				continue;

			if (d[nxt] > cost) {
				d[nxt] = cost;
				pq.push({ -cost, nxt });
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> n >> D;

	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;

		v[a].push_back({ b,c });
	}

	for (int i = 0; i < D; i++) {
		v[i].push_back({ i + 1,1 });
	}
	fill_n(d, 10001, INF);

	dijkstra(0);

	cout << d[D];

	return 0;
}