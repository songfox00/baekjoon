#include<iostream>
#include<algorithm>

using namespace std;

int n, k;
int arr[9];
int result = 0;
bool visit[9] = { false, };

void dfs(int i, int res) {
	if (res < 500)
		return;

	if (i == n) {
		result++;
		return;
	}

	for (int j = 0; j < n; j++) {
		if (res >= 500 && !visit[j]) {
			visit[j] = true;
			dfs(i + 1, res - k + arr[j]);
			visit[j] = false;
		}
	}
}

int main() {
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	dfs(0, 500);
	cout << result;

	return 0;
}