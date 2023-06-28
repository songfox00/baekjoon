#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int grade[6];

bool zero() {
	for (int i = 0; i < 6; i++)
		if (grade[i]) 
			return false;

	return true;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	while (true) {
		for (int i = 0; i < 6; i++) 
			cin >> grade[i];

		if (zero())
			break;

		sort(grade, grade + 6);

		double sum = 0;
		for (int i = 1; i < 5; i++)
			sum += grade[i];

		cout << sum / 4 << '\n';
	}

	return 0;
}