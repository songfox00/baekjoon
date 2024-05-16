#include<iostream>
#include<algorithm>
#define MAX 0x3f3f3f3f

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	long long n, minX = MAX, maxX = -MAX, minY = MAX, maxY = -MAX;

	cin >> n;
	for (long long i = 0, x, y; i < n; i++) {
		cin >> x >> y;
		minX = min(x, minX);
		maxX = max(x, maxX);
		minY = min(y, minY);
		maxY = max(y, maxY);
	}
	cout << (maxX - minX) * (maxY - minY);

	return 0;
}