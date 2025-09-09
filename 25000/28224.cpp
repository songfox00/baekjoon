#include <iostream>
using namespace std;

int main() {
	int n, a, total=0;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a;
		
		total+=a;
	}
	
	cout<<total;
	
	return 0;
}