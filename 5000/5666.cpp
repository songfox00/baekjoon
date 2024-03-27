#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int h, p;

	while (cin>>h>>p){
		double ans = (double)h / (double)p;

		cout<<fixed;
		cout.precision(2);

		cout << ans<<endl;
	}

	return 0;
}