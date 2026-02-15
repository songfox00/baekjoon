#include <iostream>
using namespace std;

int toDays(int y, int m, int d) {
    if (m <= 2) {
        y--;
        m += 12;
    }
    return 365*y + y/4 - y/100 + y/400 + (153*(m-3)+2)/5 + d;
}

int main() {
	string s;
    cin >> s;

    int y = stoi(s.substr(0,4));
    int m = stoi(s.substr(5,2));
    int d = stoi(s.substr(8,2));

    int limit = toDays(2023, 9, 16);
    int input = toDays(y, m, d);

    if (input > limit) 
    	cout << "TOO LATE";
    else 
    	cout << "GOOD";
    
	return 0;
}