#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int h,w,one=0,zero=0;
	string n;
	
	cin>>h>>w;
	
	for(int i=0;i<h;i++){
		cin>>n;
		
		for(int j=0;j<w;j++){
		if(n[j]=='1')
			one++;
		else
			zero++;
		}
	}
	
	cout<<min(one,zero);
	
	return 0;
}