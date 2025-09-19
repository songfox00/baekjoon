#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,ans=0;
	
    string s,str="ABBDOPQRabdegopq@";
    
    getline(cin, s);
    
    for (char &c : s) {
        ans += count(str.begin(),str.end(),c);
    }
    
    cout << ans;
    
	return 0;
}