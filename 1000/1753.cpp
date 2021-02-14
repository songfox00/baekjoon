#include<iostream>
#include<queue>
#include<vector>
#include<functional>

#define INF 987654321

using namespace std;
using ll = long long;

priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<> >pq;
const ll n_ = 20202, inf = 1e18;
ll V, e, k, dist[n_];
vector<pair<ll, ll>>v[n_];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	cin >> V >> e>>k;
	while (e--) {
		ll a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({ b,c });
	}
	fill(dist, dist + V + 1, inf);
	dist[k] = 0;
	pq.push({ 0,k });
	while (pq.size()) {
		auto cur = pq.top();
		pq.pop();
		if (dist[cur.second] < cur.first)
			continue;
		for (auto nxt : v[cur.second]) {
			if (dist[nxt.first] <= cur.first + nxt.second)
				continue;
			dist[nxt.first] = cur.first + nxt.second;
			pq.push({ dist[nxt.first], nxt.first });
		}
	}
	for (int i = 1; i <= V; i++) {
		if (dist[i] == INF)
			cout << "INF"<< '\n';
		else
			cout << dist[i]<<'\n';
	}
	return 0;
}