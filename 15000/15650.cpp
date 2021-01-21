#include<iostream>

using namespace std;

int n, m;
int arr[9]; 

void solve(int level, int num) {
	if (level == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << '\n';
		return;
	}
	for (int i = num; i <= n; i++) {
		arr[level] = i;
		solve(level + 1, i + 1);
	}
}

int main() {
	cin >> n >> m;
	solve(0, 1);
}