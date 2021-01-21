#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>v;

int main(){
	int n, c;
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	int left = 1;
	int right = v[n-1]-v[0];
	int result = 0;

	while (left <= right) {
		int mid = (left +  right) / 2;
		int cnt = 1;	//공유기 개수
		int loc = v[0];	//공유기 위치

		for (int i = 0; i < n; i++) {
			if (v[i] - loc >= mid) {
				cnt++;
				loc = v[i];
			}
		}
		if (cnt >= c) {
			left = mid + 1;
			result = mid;
		}
		else
			right = mid - 1;
	}
	cout << result;
	return 0;
}
