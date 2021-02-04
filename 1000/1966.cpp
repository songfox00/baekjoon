#include<iostream>
#include<queue>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
		queue<pair<int, int>>q;
		priority_queue<int>pq;
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			q.push({ j,a });
			pq.push(a);
		}

		int cnt = 0;
		while (!q.empty()) {
			int idx = q.front().first;
			int rank = q.front().second;
			q.pop();

			if (pq.top() == rank) {
				cnt++;
				pq.pop();
				if (idx == m) {
					cout << cnt <<'\n';
					break;
				}
			}
			else
				q.push({ idx, rank });
		}
	}
}