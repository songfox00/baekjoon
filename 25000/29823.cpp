#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, x=0, y=0;
	char c;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>c;
		
		if(c=='N') 
			y++;
		else if(c=='S')
			y--;
		else if(c=='E')
			x++;
		else
			x--;
	}
	
	cout<<abs(x)+abs(y);
	
	return 0;
}