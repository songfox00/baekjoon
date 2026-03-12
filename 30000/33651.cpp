#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string res = "";

    for (char c : string("UAPC")) {
        if (s.find(c) == string::npos) {
            res += c;
        }
    }

    cout << res;
    
    return 0;
}