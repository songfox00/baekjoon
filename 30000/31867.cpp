#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, odd=0, even=0, res;
	string num;
	
	cin>>n>>num;
	
	for(int i=0;i<n;i++){
		if((num[i]-'0')%2==0)
			even++;
		else
			odd++;
	}
	
	if(even>odd)
		res=0;
	else if(even<odd)
		res=1;
	else
		res=-1;
		
	cout<<res;
	
	return 0;
}