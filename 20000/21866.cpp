#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int score, sum = 0;
	bool hacker = false;

	for (int i = 0; i < 9; i++) {
		cin >> score;
		
		if (score >(i / 2 + 1) * 100) {
			hacker = true;
		}

		sum += score;
	}

	if (hacker == true) {
		cout << "hacker";
	}
	else {
		if (sum >= 100) cout << "draw";
		else cout << "none";
	}
}