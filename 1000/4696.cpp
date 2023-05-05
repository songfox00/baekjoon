#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double a;

	while (1) {
		cin >> a;
		if (a == 0) 
			break;

		cout << fixed;
		cout.precision(2);
		cout<<1 + a + pow(a, 2) + pow(a, 3) + pow(a, 4)<<'\n';
	}

	return 0;
}