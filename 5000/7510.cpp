#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	for(int i=1;i<=n;i++) {
		int arr[3] = { 0, };

		for (int j = 0; j < 3; j++)
		{
			cin >> arr[j];
		}

		sort(arr, arr + 3);

		cout << "Scenario #" << i << ":\n";

		if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])
		{
			cout << "yes\n\n";
		}
		else
		{
			cout << "no\n\n";
		}
	}

	return 0;
}