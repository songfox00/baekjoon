#include <iostream>
using namespace std;

int main() {
	long long S;
	int n=0;
	
	cin>>S;
	
	while(S>0){
		n++;
		S-=n;
	}
	
	if(S<0)
		n--;
		
	cout<<n;
	
	return 0;
}