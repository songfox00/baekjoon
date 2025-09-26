#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool good = true;
    for (int i = 0; i < 3; i++) {
        bool has7 = false;
        for (int j = 0; j < n; j++) {
            int d;
            cin >> d;
            if (d == 7) has7 = true;
        }
        if (!has7) good = false;
    }

    cout << (good ? 777 : 0) << "\n";

    return 0;
}