#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	string str;
	int n;
	int cnt1=0, cnt2=0;

		cin >> n;
		cin >> str;
		for (int i = 0; i < n; i++) {
			if (str[i] == '2')
				cnt1++;
			else if (str[i] == 'e')
				cnt2++;
		}
		if (cnt1 == cnt2)
			cout << "yee";
		else if (cnt1 > cnt2)
			cout << '2';
		else
			cout << 'e';

	return 0;
}