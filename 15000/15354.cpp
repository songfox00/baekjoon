#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<char> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];
  
    int res = 1;
    for (int i = 1; i < n; i++) {
      if (v[i] != v[i - 1])
        res++;
    }
  
    cout << res + 1 << "\n";
  
}