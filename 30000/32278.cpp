#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long n;
	
	cin>>n;
	
	if(n>=-pow(2,15) && n<=pow(2,15)-1)
		cout<<"short";
	else if(n>=-pow(2,31) && n<=pow(2,31)-1)
		cout<<"int";
	else
		cout<<"long long";
		
	return 0;
}