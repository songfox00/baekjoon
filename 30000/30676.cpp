#include <iostream>
using namespace std;

int main() {
	string color="";
	int nm;
	
	cin>>nm;
	
	if(nm>=620)
		color="Red";
	else if(nm>=590)
		color="Orange";
	else if(nm>=570)
		color="Yellow";
	else if(nm>=495)
		color="Green";
	else if(nm>=450)
		color="Blue";
	else if(nm>=425)
		color="Indigo";
	else
		color="Violet";
	
	cout<<color;
	
	return 0;
}