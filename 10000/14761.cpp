#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int x, y, n;
	cin >> x >> y >> n;

	for (int i = 1; i < n + 1; i++) {
		if (i%x == 0 && i%y == 0)
			cout << "FizzBuzz"<<endl;
		else if (i%x == 0)
			cout << "Fizz"<<endl;
		else if (i%y == 0)
			cout << "Buzz"<<endl;
		else
			cout << i<<endl;
	}

	return 0;
}