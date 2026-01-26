#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

	int n;
	
    while (cin>>n) {
        if (n == 0) 
        	break;

        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            cout << arr[i] << '\n';
        }

        cout << "0\n";
    }

    return 0;
}
