#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int N, M, K;
	cin >> N >> M >> K;

	cout << ((M - 1) + (K - 3) % N + N) % N + 1;

	return 0;
}