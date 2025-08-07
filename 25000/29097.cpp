#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n,m,k,a,b,c;
	
	cin>>n>>m>>k>>a>>b>>c;
	
	int n1=n*a, n2=m*b, n3=k*c;
	int maxn=max({n1,n2,n3});
	
	if(maxn<=n1)
		cout<<"Joffrey ";
	if(maxn<=n2)
		cout<< "Robb ";
	if(maxn<=n3)
		cout<<"Stannis ";	
	
	return 0;
}