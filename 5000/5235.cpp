#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t;
	cin >> t;

	while (t--) {
		long long n, oddSum = 0, evenSum = 0, a;
		cin >> n;
		vector <long long> v;

		for (int i = 0; i < n; i++) {
			cin >> a;
			v.push_back(a);
		}

		for (auto el : v) {
			if (el % 2) 
				oddSum += el;
			else 
				evenSum += el;
		}

		if (evenSum > oddSum) 
			cout << "EVEN\n";
		else if (evenSum == oddSum) 
			cout << "TIE\n";
		else 
			cout << "ODD\n";
	}

	return 0;
}