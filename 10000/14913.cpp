#include <iostream>
#define pi 3.14159265359

using namespace std;
//등차수열에서 항 번호 찾기
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