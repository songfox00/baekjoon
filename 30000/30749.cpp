#include <iostream>

using namespace std;

int main() {
	int lv, res=0;
	string str;
	
	cin>>lv>>str;
	
	if(str=="miss")
		res=lv*0;
	else if(str=="bad")
		res=lv*200;
	else if(str=="cool")
		res=lv*400;
	else if(str=="great")
		res=lv*600;
	else
		res=lv*1000;
		
	cout<<res;
	
	return 0;
}