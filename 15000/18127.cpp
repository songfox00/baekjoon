#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	long long a, b; 
	cin >> a >> b;

	long long res = ((b + 1) * (2 + b * (a - 2))) / 2;
	cout << res << "\n";

	return 0;
}