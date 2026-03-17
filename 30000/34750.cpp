#include <iostream>

using namespace std;

int main() {
	int n, money;
	cin>>n;
	
	if(n>=1000000)
		money=n*0.2;
	else if(n>=500000)
		money=n*0.15;
	else if(n>=100000)
		money=n*0.1;
	else
		money=n*0.05;
		
	cout<<money<<" "<<n-money;

	return 0;
}