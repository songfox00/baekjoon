#include <iostream>
#define pi 3.14159265359

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int cnt=0;

	while (1) {
		cnt++;

		double diameter, rotated, sec;
		cin >> diameter >> rotated >> sec;

		if (!rotated)
			break;
		double moved = diameter / (5280.0 * 12.0)* rotated * pi;
		cout << fixed;
		cout.precision(2);
		cout << "Trip #" << cnt << ": " << moved << ' ' << moved / sec * 3600 << endl;
	}

	return 0;
}