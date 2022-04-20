#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    
    int res=(a+b)%12;
    
    if(res==0)
        res=12;
    
    cout<<res;
    return 0;
}
