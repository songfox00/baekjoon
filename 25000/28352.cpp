#include<iostream>

using namespace std;

int main(){
    int n, res=6;

    cin>>n;

    for (int i = 11; i <= n; ++i)
    {
        res *= i;
    }

    cout<<res;

    return 0;
}