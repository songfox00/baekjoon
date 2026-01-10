#include <iostream>
using namespace std;

int main() {
	int n, first, x;
	
	cin>>n>>first;
	
	int min=first, max=first;
	
	for(int i=1;i<n;i++){
		cin>>x;
		
		if(x<min)
			min=x;
		else if(x>max)
			max=x;
	}
	
	if(first==min)
		cout<<"ez";
	else if(first==max)
		cout<<"hard";
	else
		cout<<"?";
		
	return 0;
}