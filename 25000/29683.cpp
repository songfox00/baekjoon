#include <iostream>

using namespace std;

int main() {
	int n,a,sum=0,x;
	cin>>n>>a;
	
	while(n--){
		cin>>x;
		
		sum+=x/a;
	}
	
	cout<<sum;
	
	return 0;
}