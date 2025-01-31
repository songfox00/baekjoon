#include<iostream>

using namespace std;

int main() {
	int n;
	int year;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> year;
		int num = year%100;

		if ((year + 1) % num == 0)
			cout << "Good\n";
		else
			cout << "Bye\n";
	}

	return 0;
}