#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int cntData; 
	cin >> cntData;

	for (int i = 0; i < cntData; i++) {
		int k, n;
		cin >> k >> n;

		int s1 = n * (n + 1) / 2;
		int s2 = n * n;
		int s3 = n * (n + 1);

		cout << k << " " << s1 << " " << s2 << " " << s3 << "\n";
	}

	return 0;
}