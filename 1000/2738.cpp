#include<iostream>
#include<vector>

using namespace std;

int main() {
	int arr1[101][101], arr2[101][101], res[101][101];

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr1[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr2[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			res[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << res[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}