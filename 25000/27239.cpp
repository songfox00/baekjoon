#include <iostream>

using namespace std;

int main()
{
	int n; 
	cin >> n;

	int row = (n - 1) / 8;
	int	col = (n - 1) % 8;

	cout << (char)('a' + col) << row + 1 << "\n";


	return 0;
}