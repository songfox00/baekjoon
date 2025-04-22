#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[6];
	int total = 0;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		total += arr[i];
	}

	sort(arr, arr + 5);

	cout << total / 5 <<'\n' << arr[2];

	return 0;
}