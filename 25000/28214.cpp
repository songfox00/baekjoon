#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k, p, bread, res=0;
	cin >> n >> k>>p;

	for (int i = 0; i <= n*k-k; i+=k) {
		int sum = 0;
		for (int j = i; j < i + k; j++) {
			cin >> bread;
			if (bread == 0)
				sum++;
		}
		if (sum < p)
			res++;
	}
	
	cout << res;

	return 0;
}