#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int t, a, b, c, setA = 0, setB = 0, setC = 0;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b >> c;

		setA += a;
		setB += b;
		setC += c;

		int packages = min({ setA, setB, setC });
		if (packages < 30) 
			cout << "NO\n";
		else {
			cout << packages << "\n";
			setA -= packages;
			setB -= packages;
			setC -= packages;
		}
	}

	return 0;
}