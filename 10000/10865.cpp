#include <iostream>

using namespace std;

int main() {
    int n, m, u, v, arr[100001];
    cin >> n >> m;
    
    for (int i = 1; i <= m; i++){
        cin >> u >> v;
        arr[u]++;
        arr[v]++;
    }
    
    for (int i = 1; i <= n; i++){
        cout << arr[i] << '\n';
    }
}