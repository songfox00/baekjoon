#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a, b, c, d; 
	
	cin >> a >> b >> c >> d;
	
	int res = a + b + c + d - min({a, b, c, d}) + 1;
	
	cout << res << "\n";
	
	return 0;
}