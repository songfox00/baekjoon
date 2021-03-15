#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int j = 0; j < n; j++) {
		for(int i=0;i<j;i++)
			cout << ' ';
		for (int k = 0; k < 2*n-1-(j*2); k++)
			cout << '*';
		cout << '\n';
	}
	for (int j = 1; j < n; j++) {
		for (int i = 1; i<n-j; i++)
			cout << ' ';
		for (int k = 0; k < 2*j+1; k++)
			cout << '*';
		cout << '\n';
	}

	return 0;
}