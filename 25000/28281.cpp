#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, x; 
  cin >> n >> x;

  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  long long ans = 1e18;
  for (int i = 0; i < n - 1; i++)
    ans = min(ans, 1LL * x * (v[i] + v[i + 1]));

  cout << ans << "\n";

  return 0;
}