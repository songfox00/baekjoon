#include<bits/stdc++.h>

using namespace std;

int n,m;
int arr[101][101];
int visit[101][101]={0,};
int dx[4]={1,-1,0,0}, dy[4]={0,0,1,-1};
queue<pair<int,int>>q;

int bfs(int i, int j){
	q.push({i,j});
	visit[i][j]=1;
	
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		
		if(x==n && y==m)
			return visit[x][y];
		
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			
			if(nx>=1 && nx<=n && ny>=1 && ny<=m && arr[nx][ny]==1 && visit[nx][ny]==0){
				visit[nx][ny]=visit[x][y]+1;
				q.push({nx,ny});
			}
		}
	}
}

int main() {
	string str;
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>str;
		
		for(int j=1;j<=m;j++){
			arr[i][j]=str[j-1]-'0';
		}
	}
	
	cout<<bfs(1,1);
	
	return 0;
}