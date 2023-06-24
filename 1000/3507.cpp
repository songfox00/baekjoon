#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, cnt=0;
	cin >> n;

	for (int i = 0; i <= 99; i++){
		for (int j = 0; j <= 99; j++){
			if (i + j == n){
				cnt++;
			}
		}
	}

	cout << cnt << "\n";

	return 0;
}