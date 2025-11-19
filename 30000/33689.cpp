#include <iostream>

using namespace std;

int main() {
	int n, res=0;
	string str;

	cin>>n;
	
	while(n--){
		cin>>str;
		
		if(str[0]=='C')
			res++;
	}
	
	cout<<res;
	
	return 0;
}