#include <iostream>
using namespace std;

int main() {
	int n, x, y, res=0;
	int excercise[1001]={0,};
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>excercise[i];
	}
	
	for(int i=0;i<n;i++){
		cin>>x>>y;
		
		if(excercise[i]==1 && x<y){
			res+=y-x;
		}
	}
	
	cout<<res;
	
	return 0;
}