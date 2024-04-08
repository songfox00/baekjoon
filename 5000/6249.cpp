#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, p, h;
	cin >> n >> p >> h;

	for (int i = 0, info; i < n; i++) {
		cin >> info;
		if (p > info) 
			cout << "NTV: Dollar dropped by " << p - info << " Oshloobs\n";
		if (h < info) 
			cout << "BBTV: Dollar reached " << info << " Oshloobs, A record!\n";

		p = info, h = max(h, info);
	}

	return 0;
}