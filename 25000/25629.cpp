#include <iostream>
#include<vector>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	double n;
	cin >> n;
	vector<int>v;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	double a = 0, b = 0;

	for (int i = 0; i < v.size(); i++) {
		if (v[i] % 2 != 0)
			a++;
		else
			b++;
	}

	if (a == ceil(n / 2.0) && b == int(n / 2.0))
		cout << 1;
	else
		cout << 0;
	
	return 0;
}