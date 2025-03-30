#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;

    cin>>str;

    int len=0, res=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='D')
            len=1;
        else if(len==1 && str[i]=='K')
            len++;
        else if(len==2 && str[i]=='S')
            len++;
        else if(len==3 && str[i]=='H')
            len++;
        else
            len=0;
            
        if(len==4)   
            res++;     
    }

    cout<<res;

    return 0;
}