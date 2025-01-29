#include<iostream>

using namespace std;

int main() {
	int n, a, b, total = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a == 136)
			total += 1000;
		else if (a == 142)
			total += 5000;
		else if (a == 148)
			total += 10000;
		else
			total += 50000;
	}

	cout << total;

	return 0;
}