#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n = 0;
  while (++n)
  {
    int a, b, count = 0, tri = 0, squ = 0;
    cin >> a >> b;

    if (a == 0 && b == 0)
      break;

    for (int i = 2; i <= 44721; i++)
    {
      tri = i * (i + 1) / 2;
      if (tri > a - 1)
      {
        if (tri >= b - 1)
          break;

        squ = tri + 1;
        if (squ == (int)sqrt(squ) * (int)sqrt(squ))
          count++;
      }
    }
    cout << "Case " << n << ": " << count << "\n";
  }
  return 0;
}