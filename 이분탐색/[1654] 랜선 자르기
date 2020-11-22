#include<iostream>
#include<algorithm>

using namespace std;

long long length[10001];
long long high = 0;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

	int k, n;
	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> length[i];
		high < length[i] ? high = length[i] : high;
	}
	long long low = 1;
	long long result = 0;

	while (low <= high) {
		long long count=0;
		long long mid = (high + low) / 2;
		for (int i = 0; i < k; i++) {
			count += length[i] / mid;
		}

		if (count < n)
			high = mid - 1;
		else {
			if (result < mid)
				result = mid;
			low = mid + 1;
		}
	}
	cout << result;
}
