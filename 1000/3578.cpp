#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int h;
	cin >> h;
	if (!h) {
		cout << 1; 
		return 0; 
	}
	if (h == 1) {
		cout << 0; 
		return 0; 
	}

	if (h % 2) 
		cout << 4;
	for (int i = 0; i < h / 2; i++)
		cout << 8;

	return 0;
}