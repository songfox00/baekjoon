#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int h, m, s, t;
	cin >> h >> m >> s >> t;

	s += t % 60;
	m += t / 60;
	if (s >= 60) {
		m += s / 60;
		s %= 60;;
	}
	if (m >= 60) {
		h += m / 60;
		m %= 60;
	}
	if (h >= 24)
		h %= 24;

	cout << h << ' ' << m << ' ' << s;
	return 0;
}