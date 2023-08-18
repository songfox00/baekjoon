#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	char carr[] = { 'S', 'N', 'U' }, ans;
	float arr[3], best;

	for (int i = 0; i < 3; i++) {
		float price, weight;
		cin >> price >> weight;

		price *= 10;
		weight *= 10;

		if (price >= 5000) 
			price -= 500;

		arr[i] = weight / price;
		best = max(best, arr[i]);
	}

	for (int i = 0; i < 3; i++) {
		if (best == arr[i]) {
			ans = carr[i];
			break;
		}
	}

	cout << ans;

	return 0;
}