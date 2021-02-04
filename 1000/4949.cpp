#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
	while (true) {
		string str;
		getline(cin, str);

		if (str[0] == '.')
			break; 

		stack<char> s;
		int flag = 0;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(' || str[i]=='[') 
				s.push(str[i]);

			else if (str[i] == ')') {
				if (!s.empty() && s.top() == '(')
					s.pop();
				else {
					flag = 1;
					break;
				}
			}
			else if (str[i] == ']') {
				if (!s.empty() && s.top() == '[')
					s.pop();
				else {
					flag = 1;
					break;
				}
			}
		}

		if (flag == 1) {
			cout << "no" << '\n';
		}
		else
			if (s.empty())
				cout << "yes" << '\n';
			else
				cout << "no" << '\n';
	}
	
}