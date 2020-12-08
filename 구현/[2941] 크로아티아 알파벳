#include<iostream>
#include<string>
using namespace std;

int main() {
	string str[] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
	string arr;
	cin >> arr;
	int cnt = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == 'c') {
			if (arr[i + 1] == '=' || arr[i + 1] == '-')
				i += 1;
		}
		else if (arr[i] == 'd') {
			if (arr[i + 1] == '-')
				i++;
			else if (arr[i + 1] == 'z' && arr[i + 2] == '=')
				i += 2;
		}
		else if (arr[i] == 'l' || arr[i] == 'n') {
			if (arr[i + 1] == 'j')
				i++;
		}
		else if (arr[i] == 's' || arr[i] == 'z') {
			if (arr[i + 1] == '=')
				i++;
		}
		cnt++;
	}
	cout << cnt;
	return 0;
}
