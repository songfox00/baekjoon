#include <iostream>
using namespace std;

int main() {
	int n, m; 
	cin >> n >> m;

	int res = 0;
	for (int i = 0; i < n; i++) {
	string s; 
	cin >> s;
	
	if (s.find('+') != string::npos)
	   res++;
	}
	
	cout << res << "\n";
	
	return 0;
}