#include <iostream>
#include <string>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	string a, b;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;

		int cnt = 0;
		for (int j = 0; j < a.size(); j++) {
			if (a[j] != b[j])
				cnt++;
		}

		cout << "Hamming distance is " << cnt << ".\n";
	}

	return 0;
}