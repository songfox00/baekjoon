#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	double c, length;

	while (cin>>c) {
		if (c == 0.0) 
			break;

		int cnt = 1;
		length = 0;

		for (int i = 1; ; i++) {
			length += 1.0 / (i + 1);
			if (length >= c) { 
				cnt = i; 
				break; 
			}
		}
		cout << cnt << " card(s)\n";
	}

	return 0;
}