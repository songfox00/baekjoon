#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;
	cin >> a >> b >> c;

	int num = max({ a,b,c });

	cout<<num * 3 - (a + b + c);

	return 0;
}