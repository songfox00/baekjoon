#include <iostream>

using namespace std;

int main() {
	int n;
	double a,b,res=0;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a>>b;
		
		res+=a*b;
	}
	
	cout<<res;
	
	return 0;
}