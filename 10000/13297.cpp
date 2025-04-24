#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    string cost;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>cost;

        cout<<cost.size()<<'\n';
    }

    return 0;
}