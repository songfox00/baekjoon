#include <iostream>

using namespace std;

int main() {
	int n, arr[100];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<arr[n-1]+arr[1]-arr[0];

	return 0;
}