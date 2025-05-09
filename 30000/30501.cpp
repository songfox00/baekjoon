#include <iostream>
#include <string>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string name;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> name;
		for (int j = 0; j < name.size(); j++) {
			if (name[j] == 'S') {
				cout << name;
				return 0;
			}
		}
	}
	
	return 0;
}