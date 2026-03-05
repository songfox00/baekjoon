#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    cin.ignore();

    string str;
    getline(cin, str);

    bool check[10] = {false,};

    for (char c : str) {
        if (isdigit(c)) {
            check[c - '0'] = true;
        }
    }

    for (int i = 0; i <= 9; i++) {
        if (check[i]) {
            cout << i << "\n";
        }
    }

    return 0;
}