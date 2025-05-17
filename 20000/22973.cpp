#include <iostream>
#include <cmath>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long k, n=0, cnt=1;
	int res = 0;

	cin >> k;
	k = abs(k);

	if (k == 0)
		cout << 0;
	else if (k % 2 == 0)
		cout << -1;
	else {
		while (n < k) {
			n += cnt;

			cnt *= 2;
			res++;
		}

		cout << res;
	}

	return 0;
}