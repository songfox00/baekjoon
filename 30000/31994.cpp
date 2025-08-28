#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s, maxstr;
	int a, maxn=0;
	
	for(int i=0;i<7;i++){
		cin>>s>>a;
		if(maxn<a){
			maxn=a;
			maxstr=s;
		}
	}
	
	cout<<maxstr;
	
	return 0;
}