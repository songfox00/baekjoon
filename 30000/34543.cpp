#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n,w, res;
	
	cin>>n>>w;
	
	res=n*10;
	
	if(n>2)
		res+=20;
	if(n==5)
		res+=50;
	if(w>1000)
		res-=15;
		
	cout<<max(res,0);
	
	return 0;
}