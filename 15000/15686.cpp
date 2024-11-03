#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int n, m, a, res=987654321;
vector<pair<int, int>>house;
vector<pair<int, int>>chicken;
vector<pair<int, int>>selected;

void dfs() {
	int count = 0;

	for (int i = 0; i < house.size(); i++) {
		int min_dist = 987654321;
		for (int j = 0; j < selected.size(); j++) {
			int distance = abs(house[i].first - selected[j].first) + abs(house[i].second - selected[j].second);
			min_dist = min(min_dist, distance);
		}
		count += min_dist;
	}

	res = min(res, count);

	return;
}

void select_chicken(int idx, int cnt) {
	if (cnt == m) {
		dfs();
		return;
	}

	for (int i = idx; i < chicken.size(); i++) {
		selected.push_back({ chicken[i].first, chicken[i].second });
		select_chicken(i+1, cnt + 1);
		selected.pop_back();
	}

	return;
}

int main() {
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a;
			if (a == 1) 
				house.push_back({ i,j });
			else if (a == 2)
				chicken.push_back({ i,j });
		}
	}
	
	select_chicken(0, 0);
		
	cout << res;
	
	return 0;
}