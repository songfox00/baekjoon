#include <iostream>
#include <vector>

using namespace std;

int main() {
	 int n, m, l, r;
	 vector<string>v;
	 string str;
	 
	 cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> str;
		v.push_back(str);
	}
	
	cin >> m;
	
	for (int i = 0; i < m; i++) {
		cin >> l >> r;
	
		for (int j = l - 1; j < r; j++)
		  cout << v[j] << "\n";
	}
	
	return 0;
}