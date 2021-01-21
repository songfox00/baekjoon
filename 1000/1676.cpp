#include<iostream>
#include<algorithm>

using namespace std;

int arr[1000001] = { 0, };

int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL);

	int n;
	cin >> n;

	int result = n / 5 + n / 25 + n / 125;
	cout << result;
}
