#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	bool mack = false, zack = true;
	while (n--) {
		int arr[10];
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
			if (arr[i] == 18)
				mack = true;
			else if (arr[i] == 17)
				zack = true;

			cout << arr[i] << ' ';
		}

		if (mack && zack)
			cout << "\nboth\n\n";
		else if (mack && !zack)
			cout << "\nmack\n\n";
		else if (!mack && zack)
			cout << "\nzack\n\n";
		else
			cout << "\nnone\n\n";

		mack = false, zack = false;
	}

	return 0;
}