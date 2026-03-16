#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, cnt;
	string str;
	
	cin>>n;
	
	while(n--){
		cin>>str;
		cnt=0;
		
		for(int i=0;i<str.length();i++){
			if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
				cnt++;
		}
		
		cout<<"The number of vowels in "<<str<<" is "<<cnt<<".\n";
	}
	
	return 0;
}