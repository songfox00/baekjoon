#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, score, maxn=0, minn=1001;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>score;
		
		maxn=max(score, maxn);
		minn=min(score,minn);
	}
	
	cout<<maxn-minn;
	
	return 0;
}