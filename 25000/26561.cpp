#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n; 
	cin >> n;

	for (int i = 0; i < n; i++) {
		int p, t; 
		cin >> p >> t;

		int birth = t / 4, death = t / 7;

		p += (birth - death);
		cout << p << "\n";
	}

	return 0;
}