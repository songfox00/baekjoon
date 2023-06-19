#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int k, head;
	string behaving;

	cin >> k;
	for (int i = 1; i <= k; i++) {
		cin >> head;
		cin >> behaving;
		for (auto b : behaving) {
			if (b == 'c') head++;
			else head--;
		}
		cout << "Data Set " << i << ":\n" << head << "\n\n";
	}

	return 0;
}