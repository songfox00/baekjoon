#include <iostream>

using namespace std;

int main() {
	int arr[11], n, b, res=0;
	float l,s;
	
	for(int i=0;i<11;i++){
		cin>>arr[i];
	}
	
	cin>>n;
	
	while(n--){
		cin>>b>>l>>s;
		
		if(s>=17 && l>=2.0)
			res+=arr[b];
	}
	
	cout<<res;
	
	return 0;
}