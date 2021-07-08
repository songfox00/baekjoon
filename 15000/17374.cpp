#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int t;
	cin >> t;

	while (t--) {
		int p, q, a, b, c, d;
		cin >> p >> q >> a >> b >> c >> d;

		int coin = q / c*d;
		p += coin / b*a;
		coin %= b;
		int cnt = (p - coin) / (a + b);

		int res = max(min(p - a*cnt, b*cnt+coin), min(p-a*(cnt+1), b*(cnt+1)+coin));
		cout << res << '\n';
	}
}