#include <iostream>
using namespace std;

int main() {
	int n, a, res=0;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a;
		
		res+=a/2;
		if(a%2!=0)
			res++;
	}
	
	cout<<res;
	
	return 0;
}