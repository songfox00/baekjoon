#include<iostream>

using namespace std;

int getFac(int num) {
	int tmp = 1;
	for (int i = 1; i <= num; i++)
		tmp *= i;
	return tmp;
}

int getFacNum(int num) {
	int tmp = num, sum = 0, cnt = 1;
	while (tmp) {
		sum += tmp % 10 * getFac(cnt++);
		tmp /= 10;
	}
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	while (1) {
		int n, ans = 0;
		cin >> n;

		if (!n) 
			break;
		cout << getFacNum(n) << '\n';
	}

	return 0;
}