#include<iostream>
#include<string>

using namespace std;

int main() {
	string str, ans="";
	cin >> str;

	if (str == "fdsajkl;" || str== "jkl;fdsa")
		ans = "in-out";
	else if (str == "asdf;lkj" || str==";lkjasdf")
		ans = "out-in";
	else if (str == "asdfjkl;")
		ans = "stairs";
	else if (str == ";lkjfdsa")
		ans = "reverse";
	else
		ans = "molu";

	cout << ans;

	return 0;
}