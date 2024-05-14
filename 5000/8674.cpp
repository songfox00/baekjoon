#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long a, b;
	cin >> a >> b;

	if (a % 2 != 0 && b % 2 != 0)
		cout << min(a, b);
	else
		cout << 0;

	return 0;
}