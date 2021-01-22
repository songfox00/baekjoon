#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int n, m, a;
vector<long long>v;

int main() {
	cin >> m >> n;

	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
		sum += a;
	}
	sort(v.begin(), v.end());

	long long lack = sum - m;
	long long res=0;
	long long cnt = 0;

	for (int i = 0; i < n; i++) {
		cnt=min(v[i], lack / (n - i));	//못 받은 개수
		lack -= cnt;	
		res += cnt*cnt;	//분노
	}
	res %= (long long)pow(2, 64);
	cout << res;
}