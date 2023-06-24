#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int a[5];
	char c = 'Y';

	for (int i = 0; i < 5; i++) 
		cin >> a[i];

	for (int i = 0, x; i < 5; i++) {
		cin >> x;
		if (a[i] == x) 
			c = 'N';
	}
	cout << c;

	return 0;
}