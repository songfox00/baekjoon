#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int g, p, t;
	cin >> g >> p >> t;

	int group = g + p * t;
	int one = g*p;

	if (one < group)
		cout << 1;
	else if (one > group)
		cout << 2;
	else
		cout << 0;

	return 0;
}