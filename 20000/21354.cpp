#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, p;
	cin >> a >> p;

	int cnt1 = 7 * a;
	int cnt2 = 13 * p;

	if (cnt1 < cnt2)
		cout << "Petra";
	else if (cnt1 > cnt2)
		cout << "Axel";
	else
		cout << "lika";

	return 0;
}