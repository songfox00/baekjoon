#include <iostream>
#include <string>

using namespace std;

int main() {
	int x,y;
	string a,b;
	
	cin>>x>>y;
	
	for(int i=0;i<x;i++){
		a+="1";
	}
	
	for(int i=0;i<y;i++){
		b+="1";
	}
	
	cout<<stoi(a)+stoi(b);
	
	return 0;
}