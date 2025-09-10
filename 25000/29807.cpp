#include <iostream>
using namespace std;

int main() {
	int n, arr[6]={0,}, ans=0;
	
	cin>>n;
	
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	if (arr[0] > arr[2]) 
		ans += (arr[0] - arr[2]) * 508;
    else 
    	ans += (arr[2] - arr[0]) * 108;
    	
    if (arr[1] > arr[3]) 
    	ans += (arr[1] - arr[3]) * 212;
    else 
    	ans += (arr[3] - arr[1]) * 305;
    
    if(arr[4]>0)
    	ans += arr[4] * 707;

    cout << ans * 4763;
	
	return 0;
}