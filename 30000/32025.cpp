#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int h, w;
	cin >> h >> w;

	int r = min(h, w);

	cout << r * 100 / 2;
	
	return 0;
}