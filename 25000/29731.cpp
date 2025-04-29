#include <iostream>
#include <string>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str, promise[7] = { "Never gonna give you up", "Never gonna let you down","Never gonna run around and desert you","Never gonna make you cry","Never gonna say goodbye","Never gonna tell a lie and hurt you","Never gonna stop" };
	int n, flag=0;

	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		getline(cin, str);

		for (int j = 0; j < 7; j++) {
			if (str == promise[j]) {
				flag = 0;
				break;
			}
			else
				flag = 1;
		}

		if (flag == 1)
			break;
	}

	if(flag==1)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}