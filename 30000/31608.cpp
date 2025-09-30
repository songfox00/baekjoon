#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, res=0;
	string str1;
	
	cin>>n>>str1;
	
	for(int i=0;i<n;i++){
		char c;
		cin>>c;
		
		if(str1[i]!=c)
			res++;		
	}
	
	cout<<res;
	
	return 0;
}