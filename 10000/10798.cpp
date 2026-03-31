#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	vector<string>v;
	string str;
	int mlen=0;
	
	for(int i=0;i<5;i++){
		cin>>str;
		
		int size=str.size();
		mlen=max(mlen,size);
		v.push_back(str);
	}
	
	for(int i=0;i<mlen;i++){
		for(int j=0;j<5;j++){
			if(i>=v[j].size())
				continue;
			
			cout<<v[j][i];
		}
	}
	
	return 0;
}