#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t, num;
	vector <int> v;

	cin >> t;
	for (int i = 1; i <= t; i++) {
		v.clear();
		cin >> num;

		for (int j = 0, x; j < num; j++) {
			cin >> x;
			if (x < 6) 
				v.push_back(x + 1);
		}

		cout << "Case " << i << ":\n";
		
		for (auto d : v) 
			cout << d << '\n';
	}

	return 0;
}