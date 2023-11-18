#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t1, m1, t2, m2, diff;
	cin >> t1 >> m1 >> t2 >> m2;

	m1 += t1 * 60, m2 += t2 * 60;
	if (m1 > m2) 
		m2 += 24 * 60;
	diff = m2 - m1;

	cout << diff << ' ' << diff / 30;

	return 0;
}