#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;

	if (a + b * 7 > 30)
		cout << 0;
	else
		cout << 1;

	return 0;
}