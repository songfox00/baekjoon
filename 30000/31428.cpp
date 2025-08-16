#include <iostream>

using namespace std;

int main() {
	int n, res=0;
	char friends[10001], track;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>friends[i];
	}
	
	cin>>track;
	
	for(int i=0;i<n;i++){
		if(track==friends[i])
			res++;
	}
	
	cout<<res;
	
	return 0;
}