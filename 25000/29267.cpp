#include <iostream>

using namespace std;

int main() {
	int n,k, saveCnt=0, curCnt=0;
	string str;
	cin>>n>>k;
	
	for(int i=0;i<n;i++){
		cin>>str;
		 
		if(str=="save")
			saveCnt=curCnt;
		else if(str=="load")
			curCnt=saveCnt;
		else if(str=="shoot")
			curCnt-=1;
		else
			curCnt+=k;
        
        cout<<curCnt<<'\n';
	}
	
	return 0;
}