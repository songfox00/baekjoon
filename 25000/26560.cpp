#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string str;
	cin>>n;
	
	cin.ignore();
	
	for(int i=0;i<n;i++){
		getline(cin,str);
		if(str[str.size()-1]!='.'){
			str+='.';
		}
		
		cout<<str<<'\n';
	}
	
	return 0;
}