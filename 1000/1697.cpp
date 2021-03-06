#include<iostream>
#include<queue>

using namespace std;

queue <int>q;
int visited[100001] = { 0, };
int n, k;

int bfs() {
	q.push(n);
	visited[n] = 1;

	while (!q.empty()) {
		int f = q.front();	//n
		q.pop();

		if (f == k) {
			return visited[f]-1;
		}

		if (f + 1 < 100001 && visited[f + 1]==0) {
			q.push(f + 1);
			visited[f+1] = visited[f]+1;
		}
		if (f - 1 >= 0 && visited[f - 1]==0) {
			q.push(f - 1);
			visited[f - 1] = visited[f] + 1;
		}
		if (f * 2 < 100001 && visited[f * 2] == 0) {
			q.push(f * 2);
			visited[f * 2] = visited[f] + 1;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> k;
	cout << bfs();

	return 0;
}
