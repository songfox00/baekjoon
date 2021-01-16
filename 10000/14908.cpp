#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

vector<pair<float,int>>v;

bool com(pair<float,int>a, pair<float,int>b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first > b.first;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		float a, b;
		cin >> a >> b;
		v.push_back({ b / a , i + 1 });
	}
	sort(v.begin(), v.end(), com);

	for (int i = 0; i < n; i++) {
		cout << v[i].second << ' ';
	}
}
