#include <iostream>

using namespace std;

int main() {
	int n, a;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a;
		
		int ans=1;
		for(int j=2;j<=a;j++){
			ans*=j;
		}
		
		cout<<ans%10<<'\n';
	}
	
	return 0;
}