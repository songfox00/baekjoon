#include<iostream>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	double speed, weight, strength;

	while (cin >> speed >> weight >> strength) {
		bool check = false;

		if (!speed && !weight && !strength) 
			break;

		if (speed <= 4.5 && weight >= 150 && strength >= 200) {
			check = true;
			cout << "Wide Receiver ";
		}
		if (speed <= 6.0 && weight >= 300 && strength >= 500) {
			check = true;
			cout << "Lineman ";
		}
		if (speed <= 5.0 && weight >= 200 && strength >= 300) {
			check = true;
			cout << "Quarterback ";
		}
		if (!check) 
			cout << "No positions";

		cout << '\n';
	}

	return 0;
}