#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	int x1, y1, r1, x2, y2, r2;
	while (t--) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	
		int d = pow(x1 - x2, 2) + pow(y1 - y2, 2);
		if (d == 0) {
			if (r1 == r2)
				cout << "-1\n";  // 두 원이 동일한 경우
			else 
				cout << "0\n";  // 두 원이 중심이 같지만 반지름이 다른 경우
		}
		else {
			int r_sum = r1 + r2;
			int r_diff = abs(r1 - r2);
			if (d == pow(r_sum, 2) || d == pow(r_diff, 2)) 
				cout << "1\n";  // 두 원이 외접하거나 내접한 경우
			else if (pow(r_diff, 2) < d && d < pow(r_sum, 2)) 
				cout << "2\n";  // 두 원이 서로 교차하는 경우
			else 
				cout << "0\n";  // 두 원이 서로 멀리 떨어져 있는 경우
		}
	}

	return 0;
}