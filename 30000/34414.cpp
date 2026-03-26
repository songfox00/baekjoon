#include <iostream>

using namespace std;

int main() {
	int n, num;
	cin>>n;
	
	while(n--){
		cin>>num;
		
		if(num<48){
			cout<<"False";
			return 0;
		}
	}
	
	cout<<"True";
	
	return 0;
}