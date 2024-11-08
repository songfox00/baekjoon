#include<iostream>

using namespace std;

int main() {
	int cnt[10] = { 0, };

	for (int i = 0; i<5; i++) {
		int a;
		cin >> a;
		cnt[a]++;
	}

	for (int i = 0; i<10; i++) {
		if (cnt[i] % 2 != 0)
			cout << i;
	}

	return 0;
}