#include <iostream>

using namespace std;

int main() {
	int t,x,n,k,a, arr[1001]={0,};
	
	cin>>t>>x>>n;
	
	for(int i=0;i<n;i++){
		cin>>k;
		
		for(int j=0;j<k;j++){
			cin>>a;
			arr[a]++;
		}
	}
	
	if(arr[x]==n)
		cout<<"YES";
	else
		cout<<"NO";
		
	return 0;
}