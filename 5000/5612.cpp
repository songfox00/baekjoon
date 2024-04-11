#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n, m, a, b;
	cin >> n >> m;
	int tmp = m;

	for (int i = 0; i < n; i++){
		cin >> a >> b;
		m = m + a - b;

		if (m < 0){
			tmp = 0;
			break;
		}

		if (m >= tmp)
			tmp = m;
	}

	cout << tmp;

	return 0;
}