#include <iostream>

using namespace std;

int main() {
	int m,a,b;
	
	cin>>m>>a>>b;
	
	if(a>b){
		cout<<m-a+b;
	}
	else
		cout<<b-a;
		
	return 0;
}