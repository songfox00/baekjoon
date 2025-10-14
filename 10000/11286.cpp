#include<bits/stdc++.h>

using namespace std;

struct cmp{
	bool operator()(long long a, long long b){
		if(abs(a)==abs(b))
			return a>b;
		return abs(a)>abs(b);
	}
};

int main(){
	int n, x;
	priority_queue<long long, vector<long long>, cmp>pq;
	
	cin>>n;
	
	while(n--){
		cin>>x;
		
		if(x==0){
			if(pq.empty())
				cout<<0<<'\n';
			else{
				cout<<pq.top()<<'\n';
				pq.pop();
			}
		}
		else
			pq.push(x);
	}
	
	return 0;
}