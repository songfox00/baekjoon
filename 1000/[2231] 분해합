#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	int sum;	//전체 합
	int p;	//각 자리수

	for (int i = 1; i < n; i++) {
		sum = i;
		p = i;

		while (p>0) {
			sum += p % 10;
			p /= 10;
		}
		if (sum == n) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
}
