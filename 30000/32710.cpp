#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	
	if(n==1){
		cout<<1;
		return 0;
	}
	
	for(int i=2;i<=9;i++){
		if(n%i==0){
			if(n/i<=9){
				cout<<1;
				return 0;
			}
		}

	}
	
	cout<<0;
		
	return 0;
}