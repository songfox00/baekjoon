#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);

	int t;
	cin >> t;
	
	int i = 1;
	while (t--) {
		int a, b, c;
		char s, s2;
		cin >> a >> s >> b >> s2 >> c;

		if (s == '+') {
			if (a + b == c)
				printf("Case %d: YES\n", i);
			else
				printf("Case %d: NO\n", i);
		}
		else if (s == '-') {
			if (a - b == c)
				printf("Case %d: YES\n", i);
			else
				printf("Case %d: NO\n", i);
		}
		i++;
	}

	return 0;
}