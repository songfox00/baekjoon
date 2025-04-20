#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	int pascal[31][31];

	for (int i = 0; i < n; i++) {
		pascal[i][0] = 1;
		pascal[i][i] = 1;

		if (i < 2)
			continue;

		for (int j = 1; j < i; j++) {
			pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
		}
	}

	cout << pascal[n - 1][k - 1];

	return 0;
}