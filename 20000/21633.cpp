#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double k, ans;
	cin >> k;

	ans = 25.0 + k * 0.01;
	if (ans <= 100) 
		cout<<"100.00";
	else if (ans >= 2000) 
		cout<<"2000.00";
	else {
		cout << fixed;
		cout.precision(2);
		cout << ans;
	}
		

	return 0;
}