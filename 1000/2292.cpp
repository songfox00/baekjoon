#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	int cnt = 1;
	long long num = 1; // 주위 숫자 개수
	long long range = 1;//주위 숫자 중 최대 수

	while (range < n) {
		num = 6 * cnt++;
		range +=num;
	}

	cout << cnt;
	return 0;
}
