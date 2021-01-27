#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	
	int n;
	cin >> n;

	int arr[1000001];
	memset(arr, 0, sizeof(int)*(n + 1));

	arr[1] = 0;

	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i-1] + 1;
		if (i % 2 == 0)
			arr[i] = min(arr[i], arr[i / 2] + 1);
		if (i % 3 == 0)
			arr[i] = min(arr[i], arr[i / 3] + 1);
	}
	cout << arr[n];
	return 0;
}