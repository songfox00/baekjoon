#include<bits/stdc++.h>

using namespace std;

int n,k;
int cnt[100001]={0,};
int dx[3]={-1,1,2};
queue<int>q;

int bfs(int i){
	q.push(i);
	
	while(!q.empty()){
		int x=q.front();
		q.pop();
		
		if(x==k)
			return cnt[x];
		
		for(int i=0;i<3;i++){
			int nx=x+dx[i];
			if(i==2)
				nx=2*x;
			
			if(nx>=0 && nx<=100000 && cnt[nx]==0){
				cnt[nx]=cnt[x]+1;
				q.push(nx);
			}
		}
	}
}

int main() {
	cin>>n>>k;
	
	cout<<bfs(n);
	
	return 0;
}