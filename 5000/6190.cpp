#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	long long n, score=0;
	cin >> n;

	while (n != 1) {
		if (n % 2)
			n = 3 * n + 1;
		else 
			n /= 2;

		score++;
	}
	cout << score;

	return 0;
}