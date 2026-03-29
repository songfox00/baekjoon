#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string>v;
	int n;
	string str;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>str;
		v.push_back(str);
	}
	
	for(int i=0;i<n-1;i++){
		cin>>str;
		for(int j=0;j<n;j++){
			if(v[j]==str)
				v.erase(v.begin()+j);
		}
	}
	
	cout<<v[0];
	
	return 0;
}