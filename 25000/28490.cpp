#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, a, b, res=0;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a>>b;
		
		res=max(res,a*b);
	}
	
	cout<<res;
	
	return 0;
}