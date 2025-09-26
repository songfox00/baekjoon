#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool good=true;
    
    for (int i = 0; i < 3; i++) {
        bool check = false;
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            if (a == 7) 
                check = true;
        }

        if (!check) 
            good = false;
    }

    cout << (good ? 777 : 0) << "\n";

    return 0;
}