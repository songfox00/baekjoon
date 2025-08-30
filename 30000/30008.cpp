#include <iostream>

using namespace std;

int main() {
	int n,k,g;
	cin>>n>>k;
	
	for(int i=0;i<k;i++){
		cin>>g;
		
		g=g*100/n;
		
		if(g<=4)
			cout<<1<<" ";
		else if(g<=11)
			cout<<2<<" ";
		else if(g<=23)
			cout<<3<<" ";
		else if(g<=40)
			cout<<4<<" ";
		else if(g<=60)
			cout<<5<<" ";
		else if(g<=77)
			cout<<6<<" ";
		else if(g<=89)
			cout<<7<<" ";
		else if(g<=96)
			cout<<8<<" ";
		else
			cout<<9<<" ";
	}
	
	return 0;
}