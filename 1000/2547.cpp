#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		long long student, totalCandy = 0, candy;
		cin >> student;
		for (int i = 0; i < student; i++) {
			cin >> candy;
			totalCandy = (totalCandy + candy) % student;
		}

		if (totalCandy % student) 
			cout << "NO\n";
		else 
			cout << "YES\n";
	}

	return 0;
}