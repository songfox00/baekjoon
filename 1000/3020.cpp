#include <iostream>
#include <algorithm>
#define INF 1e13+7

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, h;
	int top[500001] = { 0, };
	int bottom[500001] = { 0, };

	cin >> n >> h;

	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (i % 2 == 0)
			bottom[x]++;
		else
			top[h - x + 1]++;
	}

	for (int i = 1; i <= h; i++) {
		top[i] += top[i - 1];
		bottom[h - i] += bottom[h - i + 1];
	}

	long long res = INF;
	int cnt = 0;
	for (int i = 1; i <= h; i++) {
		if (top[i] + bottom[i] < res) {
			cnt = 1;
			res = top[i] + bottom[i];
		}
		else if (top[i] + bottom[i] == res)
			cnt++;
	}

	cout << res << " " << cnt;

	return 0;
}