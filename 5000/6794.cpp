#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	bool check[6] = { false, };
	int n, cnt=0;
	cin >> n;

	for (int i = 0; i <= 5; i++)
		for (int j = 0; j <= 5; j++)
			if (i + j == n) 
				check[i] = true;

	for (int i = 0; i <= n / 2; i++)
		if (check[i]) 
			cnt++;

	cout << cnt;

	return 0;
}