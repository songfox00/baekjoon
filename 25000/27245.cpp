#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int w, l, h; 
	cin >> w >> l >> h;

	int minDim = min(w, l);
	int	maxDim = max(w, l);

	if ((minDim >= 2 * h) && (maxDim <= 2 * minDim))
		cout << "good" << "\n";
	else
		cout << "bad" << "\n";

	return 0;
}