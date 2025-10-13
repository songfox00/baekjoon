#include<bits/stdc++.h>

using namespace std;

int n;
int arr[101][101]={0,};
vector<pair<int,char>>dir;
int dx[4]={0,1,0,-1}, dy[4]={1,0,-1,0}, way=0; //방향
int cnt=0;
queue<pair<int,int>>snake;

int game(){
	snake.push({1,1});
	arr[1][1]=2;
	
	while(1){
		cnt++;
		
		int hx = snake.back().first;
        int hy = snake.back().second;
        int nx = hx + dx[way];
        int ny = hy + dy[way];
		
		//벽이나 몸인지
		if(nx<1 || nx>n || ny<1 || ny>n || arr[nx][ny]==2){
			break;
		}

		//사과가 있다면
		if(arr[nx][ny]==1){
			arr[nx][ny]=2;
			snake.push({nx,ny});
		}
		else{//사과가 없다면
			arr[nx][ny] = 2;
            snake.push({nx, ny});
            auto tail = snake.front();
            snake.pop();
            arr[tail.first][tail.second] = 0;
		}
	
		//시간별 회전
		if(!dir.empty() && cnt==dir[0].first){
			if(dir[0].second=='L')
				way=(way+3)%4;
			else
				way=(way+1)%4;
				
			dir.erase(dir.begin());
		}
	}
	
	return cnt;
}

int main(){
	int k,l,a,b,x;
	char c;
	
	cin>>n>>k;
	
	while(k--){
		cin>>a>>b;
		
		arr[a][b]=1;
	}
	
	cin>>l;
	
	while(l--){
		cin>>x>>c;
		
		dir.push_back({x,c});
	}
	
	cout<<game();
	
	return 0;
}