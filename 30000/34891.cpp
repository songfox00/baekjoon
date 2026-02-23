#include <iostream>

using namespace std;

int main() {
	int n,m,cnt=0;
	
	cin>>n>>m;
	
	if(n%m!=0)
		cnt=1;
		
	cout<<n/m+cnt;
	
	return 0;
}