#include<iostream>

using namespace std;

int main(){
    int n,m, res=0;
    string str;

    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>str;

        int ok=0;
        for(int j=0;j<m;j++){
            if(str[j]=='O')
                ok++;
        }

        if(ok>m/2)
            res++;
    }

    cout<<res;

    return 0;
}