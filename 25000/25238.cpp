#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);

	double a, b;
	cin >> a >> b;

	if (a * (100-b) / 100 >= 100)
		cout << 0;
	else
		cout << 1;

	return 0;
}