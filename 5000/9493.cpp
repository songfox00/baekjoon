#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//ios_base::sync_with_stdio(false);
	//cin.tie(0), cout.tie(0);

	int M, A, B;

	while (cin >> M >> A >> B){
		if (M == 0 && A == 0 && B == 0){
			break;
		}

		double a = M / (double)A * 3600;
		double b = M / (double)B * 3600;

		int diff = round(abs(a - b));

		printf("%d:%02d:%02d\n", diff / 3600, diff % 3600 / 60, diff % 3600 % 60);
	}
	
	return 0;
}