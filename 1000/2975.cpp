#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	while (1) {
		int budget, amount, result;
		char op;

		cin >> budget >> op >> amount;
		if (!budget && op == 'W' && !amount) 
			break;

		if (op == 'W') 
			result = budget - amount;
		else 
			result = budget + amount;

		if (result < -200) 
			cout << "Not allowed\n";
		else 
			cout << result << '\n';
	}

	return 0;
}