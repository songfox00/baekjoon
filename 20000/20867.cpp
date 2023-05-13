#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int m, s, g, l, r;
	double a, b;
	cin >> m >> s >> g >> a >> b >> l >> r;

	int lwait = l / a, rwait = r / b;
	int ls = m % g ? m / g + 1 : m / g;
	int rs = m % s ? m / s + 1 : m / s;

	if (ls < rs) {
		if (ls + lwait < rs + rwait) cout << "friskus";
		else cout << "latmask";
	}
	else {
		if (ls + lwait < rs + rwait) cout << "friskus";
		else cout << "latmask";
	}

	return 0;
}