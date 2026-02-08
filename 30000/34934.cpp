#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin>>n;
	
	string major, res;
	int year, max_year=0;
	
	while(n--){
		cin>>major>>year;
		
		if(max_year<year){
			max_year=year;
			res=major;
		}
	}
	
	cout<<res;
	
	return 0;
}