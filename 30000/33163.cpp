#include <iostream>
using namespace std;

int main() {
	int n;
	char c;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>c;
		
		if(c=='J')
			cout<<'O';
		else if(c=='O')
			cout<<"I";
		else
			cout<<"J";
		
	}
	return 0;
}