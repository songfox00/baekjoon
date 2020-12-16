#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>v;
vector<int> s;

void Solution(int n, int key) {
	int left = 0;
	int right = n - 1;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (v[mid] == key) {
			cout << "1" << '\n';
			return;
		}
		else if (v[mid] < key)
			left = mid + 1;
		else
			right = mid - 1;
	}
	cout << '0' << '\n';
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	
	int m;
	cin >> m;
	
	for (int i = 0; i < m; i++) {
		int s;
		cin >> s;
		Solution(n, s);
	}

}
