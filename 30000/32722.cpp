#include <iostream>

using namespace std;

int main() {
	int n[3];
	
	for(int i=0;i<3;i++){
		cin>>n[i];	
	}
	
	if (n[0] != 1 && n[0] != 3) {
		cout << "EI";
		return 0;
	}
	
	if (n[1] != 6 && n[1] != 8) {
		cout << "EI";
		return 0;
	}
	
	if (n[2] != 2 && n[2] != 5) {
		cout << "EI";
		return 0;
	}
	
	cout << "JAH";
	
	return 0;
}