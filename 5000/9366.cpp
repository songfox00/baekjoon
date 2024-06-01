#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];

		sort(arr, arr + 3);

		cout << "Case #" << i << ": ";

		if (arr[0] == arr[1] && arr[1] == arr[2])
			cout << "equilateral\n";
		else if (arr[1] == arr[0] || arr[1] == arr[2] || arr[2] == arr[0])
		{
			if (arr[2] < arr[0] + arr[1])
				cout << "isosceles\n";
			else
				cout << "invalid!\n";
		}
		else
		{
			if (arr[2] < arr[0] + arr[1])
				cout << "scalene\n";
			else
				cout << "invalid!\n";
		}
	}
	return 0;
}