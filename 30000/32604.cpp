#include <iostream>

using namespace std;

int main() {
	int n, nowa=-1, nowb=-1, a, b, flag=1;
	
	cin>>n;
	
	while(n--){
		cin>>a>>b;
			
		if(nowa > a || nowb > b){
			cout<<"no";
			return 0;
		}
		
		nowa=a;
		nowb=b;
	}
	
	cout<<"yes";
	
	return 0;
}