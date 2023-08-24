#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n, m, cnt = 1; 
	cin >> n >> m;

	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			cout << cnt++;

			if (m - 1 != (j))
				cout << " ";
		}
		cout << "\n";
	}

	return 0;
}