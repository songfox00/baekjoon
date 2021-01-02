#include <iostream>

using namespace std;

int arr[21];
int i = 2;

int fibo(int n) {
	while (i <= n) {
		arr[i] = arr[i - 1] + arr[i - 2];
		i++;
		fibo(n);
	}
	return 0;
}

int main(void) {
	int n;
	cin >> n;
	arr[0] = 0;
	arr[1] = 1;

	fibo(n);

	cout << arr[n];
	return 0;
}
