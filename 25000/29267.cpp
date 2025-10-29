#include <iostream>
using namespace std;

int main() {
	int n,k, cnt=0, cur=0;
	string str;
	cin>>n>>k;
	
	for(int i=0;i<n;i++){
		cin>>str;
		
		if(str=="save"){
			cnt=cur;
			cout<<cnt<<'\n';
		}
		else if(str=="load"){
			cur=cnt;
			cout<<cur<<'\n';
		}
		else if(str=="shoot"){
			cur-=1;
			cout<<cur<<'\n';
		}
		else{
			cur+=k;
			cout<<cur<<'\n';
		}
	}
	
	return 0;
}