#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n; 
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b, c; 
		cin >> a >> b >> c;

		if (a + b + c == 180)
			cout << a << " " << b << " " << c << " Seems OK\n";
		else cout << a << " " << b << " " << c << " Check\n";
	}

	return 0;
}