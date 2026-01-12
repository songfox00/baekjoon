#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	
	cin>>n;
	
	while(n!=0){
		int arr[1001], maxn=0, sum;
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		for(int i=0;i<n-2;i++){
			sum=arr[i]+arr[i+1]+arr[i+2];
			maxn=max(sum, maxn);
		}
		
		cout<<maxn<<'\n';
		
		cin>>n;
	}
	
	return 0;
}