#include <iostream>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int N, M, K;
	cin >> N >> M >> K;

	priority_queue<int> pq; 
	for (int i = 0; i < N; ++i) {
		int D;
		cin >> D;
		pq.push(D);
	}

	int days = 0;
	int pre = 0;
	vector<int> v;

	while (!pq.empty()) {
		int cur = pq.top();
		pq.pop();

		int today = floor(pre / 2.0) + cur;
		v.push_back(today);

		cur -= M;

		if (cur > K) {
			pq.push(cur);
		}

		pre = today;
		++days;
	}

	cout << days << '\n';
	for (int i : v) {
		cout << i << '\n';
	}

	return 0;
}
