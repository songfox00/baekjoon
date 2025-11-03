#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string str, res="";
    cin>>str;

	res+=str[0];
    for(int i=0; i<str.length(); i++){
        if(str[i]=='-'){
           res+=str[i+1];
        }
    }
   
    cout<<res;

	return 0;
}