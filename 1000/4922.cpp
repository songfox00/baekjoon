#include<iostream>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	
	while (cin>>n) {
		if (!n) 
			break;

		int sum = 0, cnt = 1;
		for (int i = 0; i < n; i++, cnt += 2) 
			sum += cnt;

		cout << n << " => " << sum - n + 1 << '\n';
	}

	return 0;
}