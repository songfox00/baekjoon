#include <iostream>
using namespace std;

int main() {
	int arr[10]={0,};
	
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<10;i++){
		int total=0;
		for(int j=0;j<10;j++){
			if(j==i)
				continue;
			total+=arr[j];
		}
		
		if(arr[i]==total){
			cout<<arr[i];
			break;	
		}
	}
	
	return 0;
}