#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int a1, a2, b1, b2;
	cin >> a1 >> a2;
	cin >> b1 >> b2;

	while (1){
		a2 -= b1;
		b2 -= a1;
		if (a2 < 1 || b2 < 1) 
			break;
	}

	if (a2 < 1 && b2 < 1) { 
		cout << "DRAW" << '\n'; 
	}
	else{
		cout << "PLAYER ";
		printf("%c\n", a2 > b2 ? 'A' : 'B');
	}

	return 0;
}