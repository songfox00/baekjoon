#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n; cin >> n;

	string o, r;
	cin >> o >> r;

	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (o[i] == r[i])
			cnt++;

	cout << cnt << "\n";

	return 0;
}