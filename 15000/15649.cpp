#include<iostream>

using namespace std;

int n, m;
int arr[9];
bool check[9];

void solve(int level) {
	if (level == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (check[i])
			continue;
		check[i] = true;
		arr[level] = i;
		solve(level + 1);
		check[i] = false;
	}
}

int main() {
	cin >> n >> m;
	
	solve(0);
	
	return 0;
}