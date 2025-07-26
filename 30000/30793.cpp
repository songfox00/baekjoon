#include <iostream>

using namespace std;

int main() {
	double p,r,v;
	
	cin>>p>>r;
	
	v=p/r;
	
	if(v>=0.6)
		cout<<"very strong";
	else if(v>=0.4)
		cout<<"strong";
	else if(v>=0.2)
		cout<<"normal";
	else
		cout<<"weak";
	
	return 0;
}