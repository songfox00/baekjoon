#include <iostream>

using namespace std;

int main() {
	int a,b,k,x;
	cin>>a>>b>>k>>x;
	
	int max=k+x;
	int min=k-x;
	
	if(max<a)
		cout<<"IMPOSSIBLE";
	else if(max>=b && a<=min)
		cout<<b-min+1;
	else if(max<=a && max<=b)
		cout<<max-a+1;
	else if(min <=a && max>=b)
		cout<<b-a+1;
	else
		cout<<max-min+1;
	
	return 0;
}