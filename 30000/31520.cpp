#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string target;
    cin >> target;

    string cur = "";

    for (int i = 1; i <= 100000; i++) {
        cur += to_string(i);

        if (cur.size() > target.size()) {
            cout << -1;
            return 0;
        }

        if (target.substr(0, cur.size()) != cur) {
            cout << -1;
            return 0;
        }

        if (cur == target) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
    
    return 0;
}
