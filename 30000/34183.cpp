#include <iostream>

using namespace std;

int main() {
	long long n,m,a,b;
	
	cin>>n>>m>>a>>b;
	
	long long price=n*3-m;
	
	if(price<=0)
		cout<<0;
	else
		cout<<price*a+b;
	
	
	return 0;
}