#include <iostream>

using namespace std;

int main() {
	int s,d,i,l,n;
	
	cin>>s>>d>>i>>l>>n;
	
	if(n*4<=s+d+i+l)
		cout<<0;
	else
		cout << n*4-(s+d+i+l);
	
	return 0;
}