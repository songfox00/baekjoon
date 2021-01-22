#include<iostream>
#include<memory.h>

using namespace std;

int gate[100001] = { 0, };

int plane(int x) {
	if (gate[x] < 0)
		return x;
	return gate[x] = plane(gate[x]);
}

bool check(int x) {
	int i = plane(x);
	if (i == 0)
		return false;
	gate[i] = plane(i - 1);
	return true;
}

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	int g, p, a, res=0;
	cin >> g >> p;
	
	memset(gate, -1, sizeof(gate));

	for (int i = 0; i < p; i++) {
		cin >> a;
		if (check(a))
			res++;
		else 
			break;
	}

	cout << res;
}