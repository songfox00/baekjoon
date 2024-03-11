#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int scoreA, scoreB; 
	cin >> scoreA >> scoreB;

	int scoreC = scoreA ^ scoreB;

	cout << scoreC << "\n";

	return 0;
}