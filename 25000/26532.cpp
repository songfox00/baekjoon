#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;

	int res = a * b / 24200 + (a*b % 968 != 0 ? 1 : 0);
	cout << res;

	return 0;
}