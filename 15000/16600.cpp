#include <iostream>
#include <cmath>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	double a;
	cin >> a;

	printf("%.8f", sqrt(a) * 4);
	
	return 0;
}