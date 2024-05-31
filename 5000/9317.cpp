#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	double d, rh, rv;
	while (cin>>d>>rh>>rv) {
		if (d == 0 && rh == 0 && rv == 0)
			break;

		double w = 16 * d / sqrt(337);
		double h = 9 * w / 16;
		double hor = rh / w;
		double ver = rv / h;

		cout << fixed;
		cout.precision(2);

		cout << "Horizontal DPI: " << hor << endl << "Vertical DPI: " << ver << endl;
	}

	return 0;
}