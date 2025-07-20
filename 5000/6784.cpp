#include <iostream>

using namespace std;

int main() {
	int n, res=0;
	char arr[10001], c;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		cin>>c;
		if(arr[i]==c)
			res++;
	}
	
	cout<<res;
	
	return 0;
}