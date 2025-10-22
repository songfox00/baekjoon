#include <iostream>

using namespace std;

int main() {
	string a, b; 
	cin >> a >> b;

	string res = "";
	for (size_t i = 0; i < a.size(); i++)
	  res += (a[i] >= b[i]) ? a[i] : b[i];
	
	cout << res << "\n";
	
	return 0;
}