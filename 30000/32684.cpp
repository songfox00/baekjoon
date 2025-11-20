#include <iostream>
using namespace std;

int main() {
	int score[7]={13,7,5,3,3,2};
	int a, player1=0, player2=1.5;
	
	for(int i=0;i<6;i++){
		cin>>a;
		
		player1+=a*score[i];
	}
	
	for(int i=0;i<6;i++){
		cin>>a;
		
		player2+=a*score[i];
	}
	
	if(player1>player2)
		cout<<"cocjr0208";
	else
		cout<<"ekwoo";
	
	return 0;
}