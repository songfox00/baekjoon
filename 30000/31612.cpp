#include <iostream>

using namespace std;

int main() {
	int n, ans=0;
	char c;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>c;
		
		if(c=='j' || c=='i')
			ans+=2;
		else
			ans++;
	}
	
	cout<<ans;
	
	return 0;
}