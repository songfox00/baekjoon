#include <iostream>
using namespace std;

int main() {
	int n;
	string str;
	
	cin>>n>>str;
	
	for(int i=1;i<str.length();i++){
		if(str[i]=='J')
			cout<<str[i-1]<<'\n';
	}
	
	return 0;
}