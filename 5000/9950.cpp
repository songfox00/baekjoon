#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int l, w, a;
	
	while (cin >> l >> w >> a) {
		if (l == 0 && w == 0 && a == 0) 
			break;
	
		if (l == 0)
			l = a / w;
		else if (w == 0)
			w = a / l;
		else
			a = l*w;

		cout << l << ' ' << w << ' ' << a << endl;
	}

	return 0;
}