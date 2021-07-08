#include<iostream>
#include<algorithm>

using namespace std;

char arr[51][51];
int n, res = 0;

void check() {
	char c;	//행
	for (int i = 0; i < n; i++) {
		int cnt = 1;
		c = arr[i][0];
		for (int j = 1; j < n; j++) {
			if (arr[i][j] == c)
				cnt++;
			else
				cnt = 1;
			c = arr[i][j];
			if (cnt > res)
				res = cnt;
		}
	}

	for (int j = 0; j <n; j++) {	//열
		c = arr[0][j];
		int cnt = 1;
		for (int i = 1; i < n; i++) {
			if (arr[i][j] == c)
				cnt++;
			else
				cnt = 1;
			c = arr[i][j];
			if (cnt > res)
				res = cnt;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n-1; j++) {
			if (arr[i][j] == arr[i][j + 1])
				cnt++;
			else {
				res = cnt > res ? cnt : res;
				cnt = 0;
			}
			if (cnt == n)
				res = n;
		}
	}

	for (int i = 0; i < n-1; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (arr[j][i] == arr[j][i + 1])
				cnt++;
			else {
				res = cnt > res ? cnt : res;
				cnt = 0;
			}
			if (cnt == n)
				res = n;
		}
	}

	if (res == n) {
		cout << res;
		return 0;
	}
	
	for (int i = 0; i < n; i++) {	//행
		for (int j = 0; j < n-1; j++) {
			swap(arr[i][j], arr[i][j + 1]);
			check();
			swap(arr[i][j], arr[i][j + 1]);
		}
	}
	for (int j = 0; j < n; j++) {	//열
		for (int i = 0; i < n - 1; i++) {
			swap(arr[i][j], arr[i+1][j]);
			check();
			swap(arr[i][j], arr[i+1][j]);
		}
	}

	cout << res;
	return 0;
}
