#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int time[17] = { 0 };
	int pay[17] = { 0 };
	int res = 0;
	for (int i = 1; i <=n; i++) {
		cin >> time[i] >> pay[i];
	}
	for (int i = n; i >= 1; i--) {
		if (i + time[i] > n + 1)
			pay[i] = pay[i + 1];
		else {
			pay[i] = max(pay[i + 1], pay[i] + pay[i + time[i]]);
			res = max(res, pay[i]);
		}
	}
	cout << res;
	return 0;
}