#include<iostream>

using namespace std;

bool arr[10001];

int solve(int n) {
	int sum = n;

	while (true) {
		if (n == 0)
			break;
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 1; i < 10000; i++) {
		int idx = solve(i);

		if (idx <= 10000)
			arr[idx] = true;
	}

	for (int i = 1; i < 10000; i++) {
		if (!arr[i])
			cout << i << '\n';
	}
	return 0;
}