#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	double p;

	cin >> n >> p;

	if (n < 5) ;
	else if (n < 10) 
		p -= 500;
	else if (n < 15) 
		p = min(p - 500, p * 0.9);
	else if (n < 20)
		p = min({ p - 500, p * 0.9, p - 2000 });
	else
		p = min({ p - 500, p * 0.9, p - 2000, p * 0.75 });

	if (p < 0)
		p = 0;

	cout << p;

	return 0;
}