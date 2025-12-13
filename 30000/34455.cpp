#include <iostream>
using namespace std;

int main() {
	int D, E, Q;
	char C;
	
	cin>>D>>E;
	
	while(E--){
		cin>>C>>Q;
		
		switch(C){
			case '+':
				D+=Q;
				break;
			case '-':
				D-=Q;
				break;
		}
	}
	
	cout<<D;
	
	return 0;
}