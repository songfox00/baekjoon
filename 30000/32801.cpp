#include <iostream>
using namespace std;

int main() {
	int n,a,b, fbz=0, fz=0, bz=0;
	
	cin>>n>>a>>b;
	
	for(int i=1;i<=n;i++){
		if(i%a==0 && i%b==0)
			fbz++;
		else if(i%a==0)
			fz++;
		else if(i%b==0)
			bz++;
	}
	
	cout<<fz<<" "<<bz<<" "<<fbz;
		
	return 0;
}