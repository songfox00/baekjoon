#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

	priority_queue<long long, vector<long long>,greater<long long>>q;
	int n, x;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>x;
		
		if(x==0){
			if(q.empty())
				cout<<0<<'\n';
			else{
				cout<<q.top()<<'\n';
				q.pop();
			}
		}
		else{
			q.push(x);
		}
	}

    return 0;
}