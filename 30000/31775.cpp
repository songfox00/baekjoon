#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int l=0,k=0,p=0;
	
	for(int i=0;i<3;i++){
		cin>>str;
		
		if(str[0]=='l')
			l=1;
		else if(str[0]=='k')
			k=1;
		else if(str[0]=='p')
			p=1;
	}
	
	if(l==1 && k==1 && p==1)
		cout<<"GLOBAL";
	else
		cout<<"PONIX";
	
	return 0;
}