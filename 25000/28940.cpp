#include <iostream>
using namespace std;

int main() {
    int w, h, n, a, b;
    
    cin >> w >> h >> n >> a >> b;
    
    int page = (w / a) * (h / b);
    
    if (page == 0) {
        cout << -1;
    } else {
        int pages = n / page;
        if (n % page != 0) 
        	pages++;
        	
        cout << pages;
    }
    
    return 0;
}
