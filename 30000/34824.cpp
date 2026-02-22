#include <iostream>

using namespace std;

int main() {
	int n;
	string uni;
	
	cin>>n;
	
	while(n--){
		cin>>uni;
		
		if(uni=="yonsei"){
			cout<<"Yonsei Won!";
			return 0;
		}
		
		if(uni=="korea"){
			cout<<"Yonsei Lost...";
			return 0;
		}
		
	}
	return 0;
}