#include <iostream>

using namespace std;

int main() {
	int n,m,k;
	
	cin>>n>>m>>k;
	
	int res=n/(k-m);
	
	if(n%(k-m)!=0)
		res++;
	
	cout<<res;
	
	return 0;
}