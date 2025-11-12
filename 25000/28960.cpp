#include <iostream>

using namespace std;

int main() {
	int h=0, l=0, a=0, b=0;
	bool check = false;
	
	cin>>h>>l>>a>>b;
	
	if((a<=l && b<=h*2) || (b<=l && a<=h*2))
		check=true;
	
	if(check)
		cout<<"YES";
	else
		cout<<"NO";
		
	return 0;
}