#include <iostream>

using namespace std;

int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	if(a+b<=d && c>d)
		cout<<"Shuttle";
	else if(a+b>d && c<=d)
		cout<<"Walk";
	else if(a+b<=d && c<=d)
		cout<<"~.~";
	else
		cout<<"T.T";
	
	
	return 0;
}