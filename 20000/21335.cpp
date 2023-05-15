#include<iostream>
#include<cmath>
#define pi 3.14159265359

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double circularArea, radius;
	cin >> circularArea;

	radius = sqrt(circularArea / pi);

	printf("%.9f", 2 * radius * pi);

	return 0;
}