#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int a, b; 
	cin >> a >> b;

	while (true) {
		b += a;
		if (b >= 5) {
			cout << "yt\n";
			return 0;
		}

		a += b;
		if (a >= 5) {
			cout << "yj\n"; 
			return 0;
		}
	}
	
	return 0;
}