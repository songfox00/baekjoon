#include <iostream>
#include <string>

using namespace std;

int main() {
   int n;
   string str1,str2;
   
   cin>>n;
   
   for(int i=1;i<=n;i++){
      cin>>str1>>str2;
      
      cout<<"Case "<<i<<": "<<str2<<", "<<str1<<"\n";
   }
   
   return 0;
}