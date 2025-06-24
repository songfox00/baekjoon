#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    string str;

    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        int cons=0, vowel=0;
        getline(cin, str);

        for(int j=0;j<str.size();j++){
            switch(str[j]){
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowel++;
                    break;
                case ' ':
                    break;
                default:
                    cons++;
                    break;
            }
        }

        cout<<cons<<' '<<vowel<<"\n";
    }
}