#include <iostream>
#include<vector>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<pair<int,int>>v;
	int score[51];

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a,b));
		score[i] = 1;
	}	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			else if (v[i].first < v[j].first && v[i].second < v[j].second)
				score[i]++;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << score[i]<<" ";
	}
	return 0;
}
