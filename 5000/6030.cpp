#include <iostream>
#include <vector>

using namespace std;

int p, q;

vector <int> factor(int r) {
	vector <int> factor;
	for (int i = 1; i <= r; i++) {
		if (r % i == 0) 
			factor.push_back(i);
	}
	return factor;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	vector <int> v1, v2;
	cin >> p >> q;

	v1 = factor(p);
	v2 = factor(q);
	for (auto pf : v1) {
		for (auto qf : v2) {
			cout << pf << ' ' << qf << '\n';
		}
	}

	return 0;
}