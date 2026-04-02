#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, arr[7], res=0;
	cin>>n;
	
	while(n--){
		int score=0;
		for(int i=0;i<7;i++){
			cin>>arr[i];
		}
		
		score+=max(arr[0], arr[1]);
		sort(arr+2,arr+7);
		score+=arr[5]+arr[6];
		
		res=max(res,score);
	}
	
	cout<<res;
	
	return 0;
}