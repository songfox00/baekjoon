#include <iostream>

using namespace std;

int main() {
	int n, a, min=100001, day=0;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a;
		
		if(min>a){
			min=a;
			day=i;
		}
	}
	
	cout<<day;
	
	return 0;
}