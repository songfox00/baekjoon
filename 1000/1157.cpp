#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int list[100] = { 0, };
	for (int i = 0; i < str.length(); i++) {
		char c = str[i];
		if (c >= 'a')
			c -= 32;
		list[c]++;
	}
	int max = 0;
	char alpha;
	for (int i = 'A'; i <= 'Z'; i++) {
		if (list[i] > max) {
			max = list[i];
			alpha = i;
		}
		else if (list[i] == max)
			alpha = '?';
	}
	cout << alpha;
	return 0;
}
