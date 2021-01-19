#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int a[500000], b[500000];
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < m; i++) {
		b[i]=binary_search(a, a+n, b[i]);
	}

	for (int i = 0; i < m; i++) {
		cout << b[i] << ' ';
	}
}
