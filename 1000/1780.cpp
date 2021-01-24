#include<iostream>
#include<algorithm>

using namespace std;

int arr[2188][2188];
int result[3];

bool check(int row, int col, int num) {
	int start = arr[row][col];
	for (int i = row; i < row + num; i++) {
		for (int j = col; j < col + num; j++) {
			if (start != arr[i][j])
				return false;
		}
	}
	return true;
}

void divide(int row, int col, int num) {
	if (check(row, col, num))
		result[arr[row][col]]++;
	else {
		int size = num / 3;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				divide(row + size*i, col + size*j, size);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			a++;
			arr[i][j]=a;
		}
	}
	
	divide(0, 0, n);
	for (int i = 0; i < 3; i++) {
		cout << result[i] << '\n';
	}
}