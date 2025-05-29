#include <bits/stdc++.h>

using namespace std;

int N, H, S, E;
vector<int> banana;
vector<int> hawk;
vector<vector<int>> adj;
int maxBanana = -1;

void dfs(int node, int hp, int sum, vector<int> visitCount) {
    if (hp < 0 || visitCount[node] >= 2 || hawk[node]) 
        return;

    if (visitCount[node]==0) {  //한번도 방문하지 않았다면
        sum += banana[node];
    }
    visitCount[node]++; // 방문 처리

    // 종료 조건
    if (hp == 0) {
        if (node == E)
            maxBanana = max(maxBanana, sum);
        return;
    }

    for (int next : adj[node]) {
        dfs(next, hp - 1, sum, visitCount);
    }
}

int main() {
    int a;
    
    cin >> N >> H;
    cin >> S >> E;
    
    vector<int> visitCount(N+1, 0);
    banana.resize(N+1);
    for (int i = 1; i <= N; ++i) {
        cin>>banana[i];
    }

    hawk.resize(N+1);
    for (int i = 1; i <= N; ++i) {
        cin>>hawk[i];
    }

    adj.resize(N+1);
    for (int i = 0; i < N-1; ++i) {
        int u, v;
        cin >> u >> v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    dfs(S, H, 0, visitCount);

    cout << maxBanana;
    
    return 0;
}
