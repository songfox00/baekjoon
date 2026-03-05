#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

	int y,c,p;
	cin>>y>>c>>p;
	
	cout << ((y < c / 2 ? y : c / 2) < p ? (y < c / 2 ? y : c / 2) : p);
    
    return 0;
}