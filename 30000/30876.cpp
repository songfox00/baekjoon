#include <iostream>

using namespace std;

int main() {
	int n, a, b, x,y=1001;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a>>b;
		
		if(y>b){
			y=b;
			x=a;
		}
	}
	
	cout<<x<<' '<<y;
	
	return 0;
}