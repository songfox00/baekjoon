#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	string str;
	
	cin>>t;
	
	while(t--){
		int a=0, b=0;
		cin>>str;
		
		for(int i=0;i<str.size();i++){
			if(str[i]=='a')
				a++;
			else
				b++;
		}
		
		cout<<min(a,b)<<"\n";
	}
	
	return 0;
}