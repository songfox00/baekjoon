#include <iostream>
#define pi 3.14159265359

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int a, d, k;
	cin >> a >> d >> k;

	if ((k - a) % d || (k - a) / d < 0)
		cout << "X\n";
	else
		cout << (k - a) / d + 1 << "\n";

	return 0;
}