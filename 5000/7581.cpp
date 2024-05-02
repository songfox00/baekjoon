#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int len, w, h, v;
	while (cin >> len >> w >> h >> v) {
		if (len == 0 && w == 0 && h == 0 && v == 0) 
			break;

		if (len == 0) 
			len = v / (w * h);
		else if (w == 0)
			w = v / (len * h);
		else if (h == 0) 
			h = v / (len * w);
		else 
			v = len * w * h;

		cout << len << " " << w << " " << h << " " << v << "\n";
	}

	return 0;
}