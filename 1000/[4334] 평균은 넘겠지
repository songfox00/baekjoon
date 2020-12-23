#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int score[1001];
	
	for (int i = 0; i < n; i++) {
		int sum = 0;
		int c;
		cin >> c;
		for (int j = 0; j < c; j++) {
			cin >> score[j];
			sum += score[j];
		}
		int avg = sum / c;
		double result = 0;
		for (int j = 0; j < c; j++) {
			if (score[j] > avg)
				result += 1;
		}
		result = result / c*100;
		printf("%.3lf%%\n", result);
	}
	return 0;
}
