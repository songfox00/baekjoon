#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, aScore=0, bScore=0;
	cin >> n;

	for (int i = 0, a, b; i < n; i++) {
		cin >> a >> b;

		if (a > b) 
			aScore += a + b;
		else if (a == b) 
			aScore += a, bScore += b;
		else 
			bScore += a + b;
	}
	cout << aScore << ' ' << bScore;

	return 0;
}