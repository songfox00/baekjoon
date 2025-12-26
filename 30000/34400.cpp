#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
		int time;
		
		cin>>time;
		
		if(time%25<17)
			cout<<"ONLINE\n";
		else
			cout<<"OFFLINE\n";
	}
	return 0;
}