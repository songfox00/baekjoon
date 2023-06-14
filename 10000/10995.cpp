#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		if (i % 2 == 0) {
			printf(" ");
		}
		for (int j = 0; j < n; ++j) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
