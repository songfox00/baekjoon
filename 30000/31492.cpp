#include <iostream>
#include <string>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	getline(cin, str);
	int idx = str.size() - 1;

	if (str.size() <= 2 || !(str.front() == '"' && str.back() == '"')) 
			cout << "CE";
	else
		for (int i = 1; i < idx; i++) 
			cout << str[i];
	
	return 0;
}