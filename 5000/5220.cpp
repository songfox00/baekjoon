#include<iostream>
#include<bitset>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t; 
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n, checkBit; 
		cin >> n >> checkBit;

		bitset<16> binary(n);
		int cnt = binary.count();

		if (cnt % 2 == checkBit)
			cout << "Valid\n";
		else cout << "Corrupt\n";
	}

	return 0;
}