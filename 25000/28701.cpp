#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	long long total=1;

	for (int i = 2; i <= n; i++) {
		total += i*i*i;
	}

	cout << n*(n + 1) / 2<<"\n"<<total<<"\n"<<total;

	return 0;
}