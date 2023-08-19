#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n, res=0;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		string str = to_string(i);
		int sum = 0;
		for (int j = 0; j < str.size(); j++) {
			sum += str[j] - '0';
		}
		if (i % sum == 0)
			res++;
	}
	cout << res;

	return 0;
}