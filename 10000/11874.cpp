#include<iostream>

using namespace std;

int getSum(int num){
	int sum = 0;

	while (num){
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int L, D, X;
	cin >> L >> D >> X;

	for (int i = L; i <= D; i++)	{
		if (getSum(i) == X)		{
			cout << i << "\n";
			break;
		}
	}

	for (int i = D; i >= L; i--)	{
		if (getSum(i) == X)		{
			cout << i << "\n";
			break;
		}
	}

	return 0;
}