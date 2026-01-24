#include <iostream>
using namespace std;

int main() {
	int n,s,c,a,r, res=0;
	
	cin>>n;
	
	while(n--){
		cin>>s>>c>>a>>r;
		
		if(s>=1000 || c>=1600 || a>=1500 || (r!=-1 && r<=30))
			res++;
	}
	
	cout<<res;
	
	return 0;
}