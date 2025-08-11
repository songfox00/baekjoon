#include <iostream>

using namespace std;

int main() {
	int n, a;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a;
		
		cout<<"Case #"<<i<<": ";
		if(a>4500)
			cout<<"Round 1\n";
		else if(a>1000)
			cout<<"Round 2\n";
		else if(a>25)
			cout<<"Round 3\n";
		else
			cout<<"World Finals\n";
	}
	
	return 0;
}