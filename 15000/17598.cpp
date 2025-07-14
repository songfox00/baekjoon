#include <iostream>

using namespace std;

int main() {
	string str;
	int lion=0;
	
	for(int i=0;i<9;i++){
		cin>>str;
		
		if(str=="Lion")
			lion++;
	}
	
	if(lion>=5)
		cout<<"Lion";
	else
		cout<<"Tiger";
	
	return 0;
}