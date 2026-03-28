#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, score=0;
	string name;
	
	cin>>n>>name;
	
	for(int i=0;i<n;i++){
		score+=name[i]-'A' + 1;
	}
	
	cout<<score;
	
	return 0;
}