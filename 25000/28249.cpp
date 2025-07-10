#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	int n, res=0;
	string str;
	map<string, int>m;
	
	m["Poblano"]=1500;
	m["Mirasol"]=6000;
	m["Serrano"]=15500;
	m["Cayenne"]=40000;
	m["Thai"]=75000;
	m["Habanero"]=125000;	
		
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>str;
		
		res+=m[str];
	}
	
	cout<<res;
	
	return 0;
}