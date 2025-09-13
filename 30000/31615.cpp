#include <iostream>
using namespace std;

int main() {
	int a,b, sum, ans=0;
	
	cin>>a>>b;
	
	sum=a+b;
	
	while(sum){
		sum/=10;
		ans+=1;
	}
	
	cout<<ans;
	
	return 0;
}