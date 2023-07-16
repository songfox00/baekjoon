#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int i, j, n, m;
	char star[11][11] = {};
	cin >> n >> m;

	for (i = 1; i <= n; i++){
		if (i % 2 == 1){
			for (j = 1; j <= m; j = j + 2){
				star[i][j] = '*';
				star[i][j + 1] = '.';
			}
		}
		else{
			for (j = 1; j <= m; j = j + 2){
				star[i][j] = '.';
				star[i][j + 1] = '*';
			}
		}
	}

	for (i = 1; i <= n; i++){
		for (j = 1; j <= m; j++)
			cout << star[i][j];
		cout << endl;
	}

	return 0;
}