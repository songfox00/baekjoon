#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	char vowel[6]={'a','e','i','o','u'};
	int total=0,cnty=0;
	cin>>str;
	
	for(int i=0;i<str.size();i++){
		for(int j=0;j<5;j++){
			if(str[i]==vowel[j])
				total++;
		}
		if(str[i]=='y')
			cnty++;
	}
	
	cout<<total<<' '<<total+cnty;
	
	return 0;
}