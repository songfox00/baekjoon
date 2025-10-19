#include <iostream>
using namespace std;

int main() {
	int a,b,c, team1=0, team2=0;
	
	cin>>a>>b>>c;
	team1+=a+b*2+c*3;
	
	cin>>a>>b>>c;
	team2+=a+b*2+c*3;
	
	if(team1>team2)
		cout<<1;
	else if(team1<team2)
		cout<<2;
	else
		cout<<0;
	
	return 0;
}