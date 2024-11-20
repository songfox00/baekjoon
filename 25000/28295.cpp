#include<iostream>

using namespace std;

int main() {
	int dir = 0, n;

	for (int i = 0; i < 10; i++) {
		cin >> n;

		if (n == 1)
			dir += 90;
		else if (n == 2)
			dir += 180;
		else
			dir -= 90;
		
	}

	dir %= 360;
	if (dir < 0)
		dir += 360;

	if (dir == 0)
		cout << "N";
	else if (dir == 90)
		cout << "E";
	else if (dir == 180)
		cout << "S";
	else
		cout << "W";

	return 0;
}