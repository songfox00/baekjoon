#include<iostream>

using namespace std;

int main() {
	int p, c;
	cin >> p >> c;

	int bonus = 0;
	if (p > c)
		bonus = 500;
	
	cout << p * 50 - c * 10 + bonus;

	return 0;
}