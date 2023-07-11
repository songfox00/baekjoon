#include <iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, num;

	cin >> n;
	while (n--) {
		cin >> num;
		vector <int> v;

		for (int i = 1; i <= num; i++) {
			if (num % i == 0) 
				v.push_back(i);
		}
		cout << num << ' ' << v.size() << '\n';
	}

	return 0;
}