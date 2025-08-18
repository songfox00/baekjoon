#include <iostream>
#include <string>

using namespace std;

int main() {
	string code,c;
	int n, res=0;
	
	cin>>code>>n;
	code=code.substr(0,5);
	
	for(int i=0;i<n;i++){
		cin>>c;
		c=c.substr(0,5);
		
		if(code==c)
			res++;
	}
	
	cout<<res;
	
	return 0;
}