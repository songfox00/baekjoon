#include<iostream>
#include<cmath>

using namespace std;

int isPrime(int n) {
	if (n <= 1)
		return false;

	for (int i = 2; i <=sqrt(n); i++) {
		if (n%i == 0)
			return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int check[10001] = { 0, };

	for (int i = n; i <= m; i++) {
		if (isPrime(i))
			check[i] = 1;
	}
	
	long long sum = 0;
	int min = m;
	for (int i = n; i <= m; i++) {
		if (check[i] == 1) {
			sum += i;
			if (min > i)
				min = i;
		}
	}

	if (sum == 0) {
		cout << -1;
		return 0;
	}

	cout << sum << '\n' << min;
	return 0;
}