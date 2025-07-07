#include <iostream>
using namespace std;

int main() {
	int n, menu[11], m, b, res=0;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>menu[i];
	}
	
	cin>>m;
	
	for(int i=0;i<m;i++){
		cin>>b;
		
		res+=menu[b];
	}
	
	cout<<res;
	
	return 0;
}