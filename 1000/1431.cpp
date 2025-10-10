#include <bits/stdc++.h>

using namespace std;

int sum(string s){
	int total=0;
	for(int i=0;i<s.length();i++){
		if(s[i]-'0'<=9)
			total+=s[i]-'0';
	}
	
	return total;
}

bool cmp(string a, string b){
	if(a.length()!=b.length())
		return a.length()<b.length();
	else if(sum(a)!=sum(b))
		return sum(a)<sum(b);
	return a<b;
}

int main() {
	int n;
	string str[51];
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>str[i];
	}
	
	sort(str, str+n, cmp);
	
	for(int i=0;i<n;i++){
		cout<<str[i]<<"\n";
	}
	
	return 0;
}