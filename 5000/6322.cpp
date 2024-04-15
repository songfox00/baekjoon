#include<iostream>
#include <cmath>

using namespace std;

int main() {
	double a, b, c;
	int i = 1;
	while (cin >> a >> b >> c)
	{
		double ans = 0;
		if (!a && !b && !c)
			break;

		cout << "Triangle #" << i << '\n';
		i++;

		if (a == -1){
			ans = sqrt(c * c - b * b);
			if (ans > 0)
				printf("a = %.3f\n", ans);
			else
				cout << "Impossible.\n";
		}
		else if (b == -1){
			ans = sqrt(c * c - a * a);
			if (ans > 0)
				printf("b = %.3f\n", ans);
			else
				cout << "Impossible.\n";
		}
		else{
			ans = sqrt(a * a + b * b);
			if (ans > 0)
				printf("c = %.3f\n", ans);
			else
				cout << "Impossible.\n";
		}
		cout << '\n';
	}

	return 0;
}