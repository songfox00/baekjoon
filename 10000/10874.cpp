#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, a;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int cnt = 0;

		for (int j = 1; j <= 10; j++) {
			cin >> a;
			if ((j - 1) % 5 + 1 == a)
				cnt++;
		}
		if (cnt == 10)
			cout << i << '\n';
	}
	
	return 0;
}