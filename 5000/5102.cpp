#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int a, b, diff;
	while (cin>>a>>b) {
		if (!a && !b) 
			break;
		diff = a - b;

		if (diff < 2) 
			cout << 0 << ' ' << 0;
		else if (diff % 2) 
			cout << (diff - 3) / 2 << ' ' << 1;
		else 
			cout << diff / 2 << ' ' << 0;

		cout << '\n';
	}

	return 0;
}