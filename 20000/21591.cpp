#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a-2 >= c && b-2 >= d) {
		cout << 1;
	}
	else
		cout << 0;

	return 0;
}