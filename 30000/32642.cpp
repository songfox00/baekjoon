#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, a;
	long long res = 0, cnt = 0;
	cin >> n;

	
	for (int i = 0; i < n; i++) {
		cin >> a;

		if (a == 1)
			cnt++;
		else
			cnt--;

		res+=cnt;
	}
	
	cout << res;

	return 0;
}