#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string str;
	
	cin>>n>>str;
	
	char c = str[0];
	
	for(int i=1;i<n;i++){
		if(c==str[i])
			continue;
		else{
			cout<<"No";
			return 0;
		}
	}
	
	cout<<"Yes";
	
	return 0;
}