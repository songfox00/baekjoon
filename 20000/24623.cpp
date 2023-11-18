#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double n, a;

	cin >> n >> a;
	cout << (int)round((180 - a) / 2 + a / 2);

	return 0;
}