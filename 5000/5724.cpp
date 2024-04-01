#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	while (1){
		int ans = 0;
		cin >> n;
		if (!n)
			break;

		ans += 1 + n * n; 
		for (int i = 2; i <= n - 1; i++)
			ans += i * i;
		if (n != 1)cout << ans << '\n';
		else 
			cout << 1 << '\n';
	}

	return 0;
}