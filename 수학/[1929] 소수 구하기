#include<iostream>
#include<algorithm>

using namespace std;

int arr[1000001] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n;
	cin >> m >> n;

	arr[0] = 1; arr[1] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = 2; j*i <= n; j++) {
			arr[i*j] = 1;
		}
	}
	for (int i = m; i <= n; i++) {
		if (arr[i] == 0)
			cout << i << '\n';
	}
}
