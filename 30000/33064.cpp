#include <iostream>
using namespace std;

int main() {
	int A, B, C, D, answer;
	
	cin >> A >> B >> C >> D;
	
    answer = (A + B - 1) % 4;
    answer = (answer + C + D - 1) % 4;
    
    cout << answer + 1;
    
	return 0;
}